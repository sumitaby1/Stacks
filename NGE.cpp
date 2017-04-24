#include <iostream>
#include <stack>
using namespace std;
void nge(int a[],int n)
{
	stack<int> s;
	int i=0;
	s.push(a[i]);
	i++;
	while(i<n)
	{
		while(!s.empty())
		{
			int b=s.top();
			s.pop();
			if(b<a[i])
			{
				cout<<b<<"--->"<<a[i]<<endl;
				//s.push(a[i]);
			}
			else
			{
				s.push(b);
				break;
			}
		}
		s.push(a[i]);
		i++;
	}
	while(!s.empty())
	{
		int b=s.top();
		s.pop();
		cout<<b<<"---->"<<-1<<endl;
	}
}
int main()
{
	int a[4]={11,13,21,3};
	int n=sizeof(a)/sizeof(int);
	nge(a,n);
	return 0;
}