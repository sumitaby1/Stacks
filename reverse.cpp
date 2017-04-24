#include <iostream>
#include <stack>
using namespace std;
void insertatbottom(stack<int>&s,int item)
{
	if(s.empty())
	{	s.push(item);
		return;
	}
		int x=s.top();s.pop();
		insertatbottom(s,item);
		s.push(x);
	//}
}
void reverse(stack<int>&s)
{
	if(!s.empty())
	{
		int x=s.top();s.pop();
		reverse(s);
		insertatbottom(s,x);
	}
}
int main()
{
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	//print(s);
	reverse(s);
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}