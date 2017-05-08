#include <iostream>
#include <queue>
using namespace std;
class stack
{
	queue<int> q;
	public :
	void push(int x);
	void pop();
	int top();
	bool isempty();
};
void stack::push(int x)
{
	int s=q.size();
	q.push(x);
	for(int i=0;i<s;i++)
	{
		q.push(q.front());
		q.pop();
	}
}
void stack::pop()
{
	if(q.empty())
	{
		cout<<"NO elements"<<endl;
	}
	else q.pop();
}
int stack::top()
{
	return (q.empty())?-1:q.front();
}
bool stack::isempty()
{
	return (q.empty());
}
int main()
{
	stack s;
    s.push(10);
    s.push(20);
    cout << s.top() << endl;
    s.pop();
    s.push(30);
    s.pop();
    cout << s.top() << endl;
    return 0;
}