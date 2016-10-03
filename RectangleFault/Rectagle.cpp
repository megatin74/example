#include <iostream>
#include "Rectagle.h"
using namespace std;

bool Rectangle::InitMembers(const Point &ul,const Point &lr)
{
    if(ul.GetX()>lr.GetX()||ul.GetY()>lr.GetY())
    {
        cout<<"Wrong Position"<<endl;
        return false;
    }
    upLeft = ul;
    lowRight = lr;
    return true;
}

void Rectangle::ShowRecInfo() const
{

    cout<<"좌 상단:"<<'['<<upLeft.GetX()<<",";
    cout<<upLeft.GetY()<<']'<<endl<<endl;
    cout<<"우 하단:"<<'['<<lowRight.GetX()<<",";
    cout<<lowRight.GetY()<<']'<<endl<<endl;
}
