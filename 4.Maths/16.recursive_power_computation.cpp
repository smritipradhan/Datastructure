//program to print the power of a number
//logn time complexity
//recursive solution

#include<bits/stdc++.h>
using namespace std;

int powe(int x,int n)
{


if(n==0)
	return 1;//anything power 0 is 1

int temp = powe(x,n/2);
temp = temp * temp;

if(n%2==0)
	return temp;

else
	return temp*x;


}



int main()
{
int x = 3;
int n = 5;
cout<<powe(x,n);


	return 0;
}



/*
powe(3,5) -------temp = 9
----powe(3,2) ----temp = 3
---------powe(3,1) = temp = 1
------------powe(3,0)

temp = 9
temp = 81
81*x = 81*3 = 243

*/