#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <tuple>
using namespace std;

class BaseMenu
{
    string title;
public:
    BaseMenu(string s):title(s){}

    string getTitle(){return title;}

    virtual void command()=0;

};

class MenuItem : public BaseMenu
{
    int id;
public:
    MenuItem(string s, int n):BaseMenu(s),id(n){}
    virtual void command()
    {
        cout<<getTitle()<<"메뉴 선택됨"<<endl;
        getchar();
    }

};

#define clrscr() system("cls")

class PopupMenu : public BaseMenu
{
    vector<BaseMenu*> v;
public:
    PopupMenu(string s):BaseMenu(s){}
    void addMenu(BaseMenu* p){v.push_back(p);}
#if 1
    virtual void command()
    {
        while(1)
        {
            clrscr();
            int sz =v.size();
            for(int i=0;i<sz;i++)
            {
                cout<<i+1<<"."<<v[i]->getTitle()<<endl;
            }

            cout<<sz+1<<". 상위 메뉴로"<<endl;
            cout<<"메뉴를 선택하세요>>";
            int cmd;
            cin>>cmd;

            if(cmd<1 || cmd>sz+1)
                continue;

            if(cmd=sz+1)
                break;

            v[cmd-1]->command();



        }

    }

#endif

};


int main(void)
{
    #if 1
    PopupMenu* menubar = new PopupMenu("MenuBar");

    PopupMenu* p1 = new PopupMenu("화면 설정");
    PopupMenu* p2 = new PopupMenu("소리 설정");

    menubar->addMenu(p1);
    menubar->addMenu(p2);

    p1->addMenu(new MenuItem("해상도 변경",11));
    p1->addMenu(new MenuItem("색상 변경",12));
    p1->addMenu(new MenuItem("명도 변경",13));
    p2->addMenu(new MenuItem("크기 변경",21));
    p2->addMenu(new MenuItem("음색 변경",22));

    menubar->command();
    #endif
}
