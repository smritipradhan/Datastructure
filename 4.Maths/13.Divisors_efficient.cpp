//Efficient solution for finding the divisors of a number n

#include<bits/stdc++.h>
using namespace std;

void divisors(int n)
{
    int i = 1;
    for(i;i*i<n;i++)
    {
        if(n%i==0)
       cout<<i<<"\n";
    }
    for( ;i>=1;i--)
    {
        if(n%i==0)
        cout<<n/i<<"\n";
        
    }
}
int main()
{
    int n = 15;
    divisors(n);
    
    return 0;
}
