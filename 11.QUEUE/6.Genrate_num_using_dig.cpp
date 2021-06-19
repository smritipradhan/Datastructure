#include<bits/stdc++.h>
using namespace std;

void printDig(int n)
{ 

	queue<string> q;
	q.push("5");
	q.push("6");

	for(int i=0;i<n;i++)
	{
string cur = q.front();
cout<<cur<<" ";
q.pop();
q.push(cur+"5");
q.push(cur+"6");

	}


}
int main()
{
	int n = 10;
	printDig(n);
	return 0;
}