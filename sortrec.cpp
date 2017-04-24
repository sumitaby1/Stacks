#include <iostream>
#include <stack>
using namespace std;
void util(stack<int>&s,int x)
{
	if(s.empty()||x>s.top())
	{
		s.push(x);
		return;
	}
	int temp=s.top();s.pop();
	util(s,x);
	s.push(temp);
}
void sort(stack<int>&s)
{
	if(!s.empty())
	{
		int x=s.top();
		s.pop();
		sort(s);
		util(s,x);
	}
}
int main()
{
	stack<int> s;
	s.push(10);
	s.push(-20);
	s.push(30);
	s.push(-4);
	sort(s);
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}