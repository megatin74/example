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
		cout << getTitle() << " ���� �Ǿ����ϴ�" << endl;
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

			cout << sz + 1 << ". ���� �޴���" << endl;
			//--------------------------------------
			cout << "�޴��� �����ϼ��� >> ";
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

	PopupMenu* popup1 = new PopupMenu("����");
	PopupMenu* popup2 = new PopupMenu("�ػ�");

	menubar->addMenu(popup1);
	popup1->addMenu(popup2);

	MenuItem* item1 = new MenuItem("������", 11);
	MenuItem* item2 = new MenuItem("�Ķ���", 12);

	popup1->addMenu(item1);
	popup1->addMenu(item2);

	MenuItem* item3 = new MenuItem("1024*768", 21);
	MenuItem* item4 = new MenuItem("1920*1080", 22);

	popup2->addMenu(item3);
	popup2->addMenu(item4);
	//-------------------------------
	// �ֻ��� �޴��� menubar�� ����
	menubar->command();

	delete menubar;
}













