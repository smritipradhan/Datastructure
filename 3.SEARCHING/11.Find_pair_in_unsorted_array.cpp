#include<bits/stdc++.h>
using namespace std;

void isPresent(int arr[],int n,int sum)
{
unordered_set<int> s;
for(int i=0;i<n;i++)
{
	int temp = sum-arr[i];
if(s.find(temp) != s.end())
{
	cout<<arr[i]<<" "<<temp;
	break;
}
s.insert(arr[i]);
}
}

int main()
{
int arr[] =  {10,20,4,5,6,3,2,0};
int n = sizeof(arr)/sizeof(arr[0]);
int sum = 100;
isPresent(arr,n,sum); 
return 0;
}