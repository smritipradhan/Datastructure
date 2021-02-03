//Sum of digits using Recursion
#include<bits/stdc++.h>
using namespace std;

int Sum_dig(int n)
{
 if(n<=9)
 return n;
 
 return n%10 + Sum_dig(n/10);
 
    
}
int main()
{
    
    cout<<Sum_dig(890);
    return 0;
}
