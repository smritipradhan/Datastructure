#include<bits/stdc++.h>
using namespace std;

void showstack(stack<int> s)
{

while(!s.empty())
	{
	cout<<s.top();
	cout<"\n";
	s.pop();
	

	}
int main()
{
stack<int> s1;
s1.push(20);
s1.push(10);
s1.push(20);
s1.push(80);
showstack(s1);



return 0;
}



