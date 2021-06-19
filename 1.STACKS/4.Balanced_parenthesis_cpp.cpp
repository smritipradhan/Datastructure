#include<bits/stdc++.h>
using namespace std;


bool isMatch(char a,char b)
{
	return((a=='[' && b==']') || (a=='(' && b==')' ) || (a=='{' && b=='}'));
}

bool isBalanced(string str)
{

stack<int> s;

for(int i=0;i<str.length();i++)
{

if(str[i]=='[' || str[i]=='{' || str[i]=='(')
	{
		s.push(str[i]);
	}
else
	{
		if(s.empty()==true)
			return false;
		else if(isMatch(s.top(),str[i])==false)
			return false;
		else
			s.pop();
	}	

}
if(s.empty()==true)
	return true;
}

int main()
{
	string str = "{[])}";
	cout<<isBalanced(str);
	return 0;
}