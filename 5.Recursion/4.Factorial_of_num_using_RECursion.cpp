//factorial of a number using recursion
#include<bits/stdc++.h>
using namespace std;


long fact(long n)
{
    if(n<=1)
    return 1;
    
    return n* fact(n-1);
    
}
int main()
{
    cout<<fact(9);
    return 0;
}

