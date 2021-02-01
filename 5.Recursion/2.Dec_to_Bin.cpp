//problem to convert decimal to binary number using Recursion
#include<bits/stdc++.h>
using namespace std;

void Rec(int n)
{
 if(n==0)
 return;
 
 Rec(n/2);
 cout<<(n%2);
 
}
int main()
{
 Rec(2);
 
    
return 0;    
}



