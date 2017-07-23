
#include <iostream>
#include <list>

using namespace std;


// 클래스 어답터
template<typename T, typename C = list<T> > class queue
{
	C st;
public:
	inline void push(const T& a) { st.push_back(a); }
	inline int pop() 
	{
		int num;
		num = st.front();
		st.pop_front();
		return num;
	}
};

int main()
{


	queue<int> q;
	q.push(10);
	q.push(20);
	cout << q.pop() << endl;
	cout << q.pop() << endl;

}
