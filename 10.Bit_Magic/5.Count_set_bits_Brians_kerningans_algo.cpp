//Brian Kerningans Algorithm
#include<bits/stdc++.h>
using namespace std;

void Brians(int n)
{

int count =0;
while(n!=0)
{
n = (n)&(n-1);
count++;


}
cout<<count;


}
int main()
{
	int n=0;
	cin>>n;
	Brians(n);
	return 0;
}