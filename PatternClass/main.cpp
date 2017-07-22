#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define clrscr() system("cls")

class BaseMenu
{
	string title;
public:
	BaseMenu(string t) : title(t) {}
	virtual ~BaseMenu() {}
	string getTitle() const { return title; }

	virtual void command() = 0;
};


class MenuItem : public BaseMenu
{
	int id;
public:
	MenuItem(string t, int n) : BaseMenu(t), id(n) {}
	virtual void command()
	{
		cout << getTitle() << " 선택 되었습니다" << endl;
		getchar();
	}
};

class PopupMenu : public BaseMenu
{
	vector<BaseMenu*> v;
public:
	PopupMenu(string s) : BaseMenu(s) {}

	~PopupMenu()
	{
		for (auto p : v)
			delete p;
	}

	void addMenu(BaseMenu* p) { v.push_back(p); }

	virtual void command()
	{
		while (1)
		{
			clrscr();
			int sz = v.size();

			for (int i = 0; i < sz; i++)
				cout << i + 1 << ". " << v[i]->getTitle() << endl;

			cout << sz + 1 << ". 상위 메뉴로" << endl;
			//--------------------------------------
			cout << "메뉴를 선택하세요 >> ";
			int cmd;
			cin >> cmd;
			if (cmd < 1 || cmd >  sz + 1) continue;

			if (cmd == sz + 1) break;

			v[cmd - 1]->command();
		}
	}
};

int main()
{
	PopupMenu* menubar = new PopupMenu("MENUBAR");

	PopupMenu* popup1 = new PopupMenu("색상");
	PopupMenu* popup2 = new PopupMenu("해상도");

	menubar->addMenu(popup1);
	popup1->addMenu(popup2);

	MenuItem* item1 = new MenuItem("빨강색", 11);
	MenuItem* item2 = new MenuItem("파란색", 12);

	popup1->addMenu(item1);
	popup1->addMenu(item2);

	MenuItem* item3 = new MenuItem("1024*768", 21);
	MenuItem* item4 = new MenuItem("1920*1080", 22);

	popup2->addMenu(item3);
	popup2->addMenu(item4);
	//-------------------------------
	// 최상위 메뉴인 menubar를 선택
	menubar->command();

	delete menubar;
}













