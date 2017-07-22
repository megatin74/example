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
            // 이전의 결과가 담긴 vector v를 참고 해서
            // 사용자가 생각한 숫자를 예측해 냅니다.
            // 현재 구현은 무조건 랜덤 입니다.
            int x = 0, y = 0, z = 0;
            pPN->PredictNumber(&x,&y,&z);

            //--------------------------------------
            cout << "당신이 생각한 숫자는 " << x
            << ", " << y << ", " << z << " 입니까 ?" << endl;

            int strike = 0, ball = 0;
            cout << "strike 갯수 : ";
            cin >> strike;

            if (strike == 3)
            {
                cout << "성공 !" << endl;
                break;
            }

            cout << "ball 갯수 : ";
            cin >> ball;
            //--------------------------------------
            // 입력된 결과(strike, ball)을 기록해 두었다가
            // 다음수를 예측할때 사용합니다.
            v.push_back(make_pair(INPUT(x, y, z), RESULT(strike, ball)));
            dump();
        }
    }
    // 필요하신 분을 위해 참고용으로 만든 함수입니다.
    void dump()
    {
        printf("-------------------------------\n");
        printf("입력값 s b\n");
        for (auto& p : v) // p는 pair<INPUT, RESULT> 입니다.
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
