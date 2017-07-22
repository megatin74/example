#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <tuple>
using namespace std;



class firstBaseBall
{

public:
     inline void PredictNumber(int* a,int* b,int* c)
    {
        *a = 1;
        *b = 2;
        *c = 3;
        cout<<"apply first rule"<<endl;
    }
};

class SecondBaseBall
{

public:
     inline void PredictNumber(int* a,int* b,int* c)
    {
        *a = 3;
        *b = 2;
        *c = 1;
        cout<<"apply second rule"<<endl;
    }
};

template<typename T, typename AgModel = firstBaseBall>
class BaseBallGame
{
    typedef tuple<int, int, int> INPUT;
    typedef tuple<int, int> RESULT;
    vector<pair<INPUT, RESULT> > v;
    AgModel AM;
public:


    BaseBallGame() { srand((unsigned)time(0)); }
    void run()
    {
        while (1)
        {
            //-----------------------------------------------
            // ������ ����� ��� vector v�� ���� �ؼ�
            // ����ڰ� ������ ���ڸ� ������ ���ϴ�.
            // ���� ������ ������ ���� �Դϴ�.
            int x = 0, y = 0, z = 0;

            AM.PredictNumber(&x,&y,&z);
            //--------------------------------------
            cout << "����� ������ ���ڴ� " << x
            << ", " << y << ", " << z << " �Դϱ� ?" << endl;

            int strike = 0, ball = 0;
            cout << "strike ���� : ";
            cin >> strike;

            if (strike == 3)
            {
                cout << "���� !" << endl;
                break;
            }

            cout << "ball ���� : ";
            cin >> ball;
            //--------------------------------------
            // �Էµ� ���(strike, ball)�� ����� �ξ��ٰ�
            // �������� �����Ҷ� ����մϴ�.
            v.push_back(make_pair(INPUT(x, y, z), RESULT(strike, ball)));
            dump();
        }
    }
    // �ʿ��Ͻ� ���� ���� ��������� ���� �Լ��Դϴ�.
    void dump()
    {
        printf("-------------------------------\n");
        printf("�Է°� s b\n");
        for (auto& p : v) // p�� pair<INPUT, RESULT> �Դϴ�.
            {
            printf(" %d %d %d : %d %d\n",
            get<0>(p.first), get<1>(p.first), get<2>(p.first),
            get<0>(p.second), get<1>(p.second));
        }
        printf("-------------------------------\n");
    }
};

int main(void)
{
    BaseBallGame<int, firstBaseBall> f;
    BaseBallGame<int, SecondBaseBall> s;


    f.run();

    s.run();

}
