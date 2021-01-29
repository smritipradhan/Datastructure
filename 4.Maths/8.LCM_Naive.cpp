//Naive solution
#include<bits/stdc++.h>
using namespace std;
int max(int a ,int b)
{
 if(a>b)
 return a;
 else
 return b;
    
}
int lcm(int a,int b)
{
 int s = max(a,b);
 
 
while(true)
 {
  if(s%a==0 && s%b==0)
  return s;
  s++;
 }
 
    
}
int main()
{
    int a = 2;
    int b = 8;
    
    cout<<lcm(a,b);
    
    return 0;
}
