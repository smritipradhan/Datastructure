-p   #include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
if(b==0)
return a;
else
return gcd(b,a%b);
}
int main()
{   int a = 12;
    int b = 15;
    int gcd_ = gcd(a,b);
    
    int lcm = (a*b )/gcd_;
    cout<<gcd_<<"\n";
    cout<<lcm;
    return 0;
}

