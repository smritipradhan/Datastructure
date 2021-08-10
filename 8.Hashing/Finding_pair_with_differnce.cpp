#include<bits/stdc++.h>
using namespace std;

void print_pairs(int arr[],int n,int k)
{

unordered_set<int> s(arr,arr+n);


for(int i=0;i<n;i++)
{



if(s.find(arr[i]-k)!=s.end())
{
	cout<<arr[i]<<" "<<arr[i]-k;
	//s.erase(arr[i]-k);
	cout<<endl;
}
if(s.find(arr[i]+k)!=s.end())
{
	cout<<arr[i]<<" "<<arr[i]+k;
//	s.erase(arr[i]+k);
	cout<<endl;
	s.erase(arr[i]);
}



}


}
int main()
{
	int n = 3;
	int arr[] = {3,5,7};
	int k = 2;
	print_pairs(arr,n,k);
	return 0;
}