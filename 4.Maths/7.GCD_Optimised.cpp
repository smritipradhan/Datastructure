#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main()
{
    int a = 15;
    int b = 10;
    cout<<gcd(a,b);
    return 0;
}
