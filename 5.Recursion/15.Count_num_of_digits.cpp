#include<bits/stdc++.h>
using namespace std;


int countDigits(int n)
{
if(n <= 9)
return 1;

return 1 + countDigits(n/10);


 
}
int main()
{

countDigits(9999);
return 0;
}
