#include<bits/stdc++.h>
using namespace std;
int min(int a,int b)
{
if(a<=b)
return a;
else
return b;
}

void gcd(int a,int b)
{
    int low = min(a,b);
    for(int i = low;i>0;i--)
    {
     if(a%i==0 && b%i == 0)
    { 
     cout<<i;
     break;
    }
    }
}
int main()
{
    int a = 100;
    int b = 200;
    gcd(a,b);
    return 0;
}
