#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isbanacled(char a,char b)
{
	if(a=='('&&b==')')return true;
	if(a=='{'&&b=='}')return true;
	if(a=='['&&b==']')return true;
	cout<<"hahahaha"<<endl;
	return false;
}
bool check(char s[])
{
	stack<int> s1;
	int i=0;
	while(s[i])
	{
		if(s[i]='{'||s[i]=='['||s[i]=='(')
		{
			 
			s1.push(s[i]);
		}
		if(s[i]='}'||s[i]==']'||s[i]==')')
		{
			 
			if(s1.empty())return false;
			
			//s1.pop();
			if((isbanacled(s1.top(),s[i]))==false)
			{
					cout<<"I dont know"<<endl;
					return false;
			}
			s1.pop();
	}
		i++;
	}
	s1.pop();
	if(s1.empty())
	{
		cout<<"empty";;;
		return true;
	}
	else
	{
		cout<<"Not empty"<<endl;
		//cout<<a<<endl;
		return false;
	}
}
int main()
{
	char s[100]="{}()";
	cout<<check(s)<<endl;
	return 0;
}