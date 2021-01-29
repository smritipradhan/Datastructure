//Naive solution for finding the prime factors of a number
//1Find if the number is prime then divide the number with powers of that prime number.

#include<bits/stdc++.h>
using namespace std;

bool Isprime(int n)
{
if(n==1)
return false;

if(n==2 || n==3)
return true;

if(n%2==0 || n%3 == 0)
{
    return false;
}

for(int i = 5; i*i <= n;i=i+6)
{
if(n%i==0 || n%(i+2) == 0)
    return false;
}
return true;

}

void printFactors(int n)
{
    for(int i=2;i<=n;i++)
    {
    if(Isprime(i))
    {
     int x = i;
     while(n%x==0)
        {
      cout<<i<<"\n";    
      x = x*i;
     
       }  
        
    }
    
    }
}


int main()
{ 
  int n = 7;  
  printFactors(n);
  return 0;
    
}
