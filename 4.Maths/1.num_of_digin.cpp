// find the number of digits in 3 method

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

void iterative(int n)
{
    int count = 0;
    while(n>0)
    {
        count++;
        n = n/10;
        
    }
    cout<<count<<"\n";
}
int recursive(int n)
{
    if(n==0)
    return 0;
    
    return 1+recursive(n/10);
    
}


int main()
{
    int n = 7907097;
    iterative(n);
    int a = recursive(n);
    cout<<a<<"\n";
    cout<<floor(log10(n))+1;
  //  liner(n);
    
    return 0;
}
