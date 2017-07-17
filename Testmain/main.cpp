#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;

class Vector3{
public:
        Vector3(double _x, double _y, double _z){
                x=_x;
                y=_y;
                z=_z;
        }
        double x,y,z;
        void Print(){
                cout<<x<<setw(8)<<y<<setw(8)<<z<<endl;
        }
};

int main()
{
        Vector3 v1(10.4, 20.5,  10.1);
        Vector3 v2(55,   20.1,  45);
        Vector3 v3(1,    2,     3);
        Vector3 v4(4.4,  6.6,   7.7);

        std::queue<Vector3> que;          // ���ø��� ����� Ŭ������ ���� �������ش�.
        que.push(v1);
        que.push(v2);
        que.push(v3);
        que.push(v4);

        que.front().Print();                  // Queue�� �պκ��� ����Ѵ�. [���� �� ���� ��µ�]
        que.back().Print();                 // Queue�� �޺κ��� ����Ѵ�. [�� �������� �� ���� ��µ�]
        int size = que.size();
        cout<<"size : "<<size<<endl;

        cout<<"----------------"<<endl;

        for (int i=0; i<size; i++)
        {
                que.front().Print();
                que.pop();                  // Queue�� �ִ� �����͸� ���ʴ�� �������ش�.
        }
        return 0;
}



