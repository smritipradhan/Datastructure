
#include<bits/stdc++.h>
using namespace std;



int Sum(int n);

int digitalRoot(int n)
{
  int r = Sum(n);
  if(r/10==0)
  return r;
  else
  Sum(r);
    
    
}

int Sum(int n)
{
    
    //Your code here
    if(n<=9)
    return n;
    
    return n%10 + digitalRoot(n/10);  
    
    
}

int main()
{
digitalRoot(9999);

return 0;
}
