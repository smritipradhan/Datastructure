//program to print the integers from n-1
#include<bits/stdc++.h>
using namespace std;

void rec(int n)
{

if(n<=0)
return;

cout<<n<<"\n";
rec(n-1);
}

int main()
{
    rec(20);
    return 0;
}

//theta(n) auxilary space -- theta (1)




