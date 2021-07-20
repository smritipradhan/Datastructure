#include<bits/stdc++.h>
using namespace std;

void printCeiling(int arr[],int n)
{

set<int> s;
for(int i=0;i<n;i++)
{
s.insert(arr[i]);
auto itr = s.lower_bound(arr[i]);
cout<<*itr<<" ";
itr++;
if(itr!=s.end())
{
	cout<<*(itr)<<" ";

}
else
{
	cout<<-1<<" ";
}

	
}

}

int main() {
	
	int arr[]={2,8,30,15,25,12};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	printCeiling(arr,n);
}