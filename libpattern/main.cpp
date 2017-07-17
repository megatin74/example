#include <iostream>
#include "libpattern.h"
using namespace std;


CWinApp* g_app=0;
class CWinApp
{
public:
    CWinApp(){g_app = this;}
    virtual bool initInstance(){ return false;}
    virtual int ExitInstance() {return 0;}
    virtual int Run(){return 0;}

};

CWinApp* AfxGetApp(){ return g_app;}


int main()
{

    CWinApp* pApp = AfxGetApp();

    if(pApp->ExitInstance())
        pApp->Run();
    pApp->ExitInstance();

    cout<<"test"<<endl;
    return 0;
}
