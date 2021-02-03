//Program to find the sum of N natural number using recursion

#include<bits/stdc++.h>
using namespace std;

int Sum(int n)
{
if(n==0)
return 0;

return n+Sum(n-1);
}
int main()
{
    
    cout<<Sum(5);
    return 0;
}

