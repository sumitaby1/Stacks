#include <iostream>
#include <stdlib.h>
using namespace std;
#define Max 1000
class stack
{
	int top;
	public :
	stack()
	{
		top=-1;
	}
		int a[Max];
		bool push(int x);
		bool isempty();
		int pop();
		int top1();
		void print();

};
void stack::print()
{
	int x=top;
	while(x>-1)
	{
		cout<<a[x--]<<" ";
	}
	cout<<endl;
}
int stack::top1()
{
	if(top==-1)
	{
		cout<<"Stack is empty returning -1"<<endl;
		return -1;
	}
	else
	{
		return a[top];
	}
}
bool stack:: push(int x)
{
	if(top>=Max)
	{
		cout<<"Stack Overflow"<<endl;
		return false;
	}
	else
	{
		a[++top]=x;
		return true;
	}
}
int stack::pop()
{
	if(top==-1)
	{
		cout<<"Stack Underflow"<<endl;
		return false;
	}
	else
	{
		return a[top--];
	}
}
bool stack::isempty()
{
	return (top==-1);
}
int main()
{
	stack s;
	s.pop();
	s.push(10);
	s.push(20);
	s.push(30);
	s.print();
	s.pop();
	(s.isempty())?cout<<"true"<<endl:cout<<"false"<<endl;
	s.print();
	cout<<s.top1()<<endl;
	return 0;
}