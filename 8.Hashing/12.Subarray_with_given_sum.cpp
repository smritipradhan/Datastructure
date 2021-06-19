#include<bits/stdc++.h>
using namespace std;

bool given_sum(int arr[],int n,int sum_)
{
unordered_set<int> s;
int prefix_sum = 0;

for(int i=0;i<n;i++)
{

prefix_sum += arr[i];
if(prefix_sum==sum)return true; //to handle cases where subaarray starts from index 0
if(s.find(prefix_sum-sum_)!=s.end())
	return true;

s.insert(prefix_sum);

}
return false;
}
int main()
{
	int arr[] = {5,1,6,3,3,-1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum_ = 22;
	cout<<given_sum(arr,n,sum_);


}