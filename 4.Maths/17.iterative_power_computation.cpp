//iterative approach to calculate
//logn and space 0(1)

//for % m

#include<bits/stdc++.h>
using namespace std;

int powe(int x,int n)
{
int res = 1;
while(n>0)
{
if(n&1) //n is odd
	res = res * x; //%m

x = x*x; //%m
n = n>>1;



}
return res;


}             
int main()
{
int x = 3;
int n = 5;
cout<<powe(x,n);
return 0;
}