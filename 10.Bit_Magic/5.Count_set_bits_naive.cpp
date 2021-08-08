

#include<bits/stdc++.h>
using namespace std;

void count_set_bits(int n)
{

int count = 0;
if(n&1)
	count++;

while(n!=0)
{
if(n>>1&1)
	count++;
n=n>>1;


}
cout<<count;

}

int main()
{

int n = 0;
cin>>n;
count_set_bits(n);
return 0;

}