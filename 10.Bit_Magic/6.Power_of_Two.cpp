#include<bits/stdc++.h>
using namespace std;

bool power_of_two(int n)
{
    
    
    return ((n & (n - 1)) == 0)||n==0;

}
int main()
{
	int n;
	cin>>n;
	cout<<power_of_two(n);
	return 0;
}