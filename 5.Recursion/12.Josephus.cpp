//Program to solve the Josephus Probem

#include<bits/stdc++.h>
using namespace std;

int jos(int n ,int k)
{
if(n==1)
return 0;

return (jos(n-1,k)+k)%n;

}
int myjos(int n,int k)
{
    jos(n,k)+1;//when the index start from 1 call the myjos function first
}


int main()
{
    cout<<jos(5,3);
    return 0;
}

