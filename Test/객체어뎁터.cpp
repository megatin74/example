
#include <iostream>
#include <list>

using namespace std;


// 객체 어답터

class queue 
{
	list<int>* st;
public:
	queue(list<int>* p) : st(p) {}
	 void push(int a) { st->push_back(a); }
	 int pop()
	{
		int num;
		num = st->front();
		st->pop_front();
		return num;
	}
};

int main()
{
	list<int> l;

	queue q(&l);
	q.push(10);
	q.push(20);
	cout << q.pop() << endl;
	cout << q.pop() << endl;

}
