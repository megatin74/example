#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <tuple>
using namespace std;


struct IPredictor
{
    virtual void PredictNumber(int* a,int* b,int* c)=0;
    virtual ~IPredictor(){}

};


class BaseBallGame
{
    typedef tuple<int, int, int> INPUT;
    typedef tuple<int, int> RESULT;
    vector<pair<INPUT, RESULT> > v;
    IPredictor* pPN=0;
public:

    void setPredictor(IPredictor* p){pPN = p;}


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
            pPN->PredictNumber(&x,&y,&z);

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

class firstBaseBall : public IPredictor
{

public:
     virtual void PredictNumber(int* a,int* b,int* c)
    {
        *a = 1;
        *b = 1;
        *c = 1;
        cout<<"apply first rule"<<endl;
    }
};

class SecondBaseBall : public IPredictor
{

public:
     virtual void PredictNumber(int* a,int* b,int* c)
    {
        *a = 2;
        *b = 2;
        *c = 2;
        cout<<"apply second rule"<<endl;
    }
};
int main(void)
{
    BaseBallGame bbg;
    firstBaseBall f;
    SecondBaseBall s;

    bbg.setPredictor(&f);
    bbg.run();

    bbg.setPredictor(&s);
    bbg.run();


}
