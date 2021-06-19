//program to find the longest subarray in given array


#include<bits/stdc++.h>
using namespace std;

int longest(int arr[],int n,int sum)
{
unordered_map<int,int> umap;

int cur_sum = 0;
int res = 0;

for(int i=0;i<n;i++)
{

cur_sum += arr[i];

if(cur_sum==sum)
	res = i+1;


if(umap.find(cur_sum) == umap.end())
{
	umap.insert({cur_sum,i});

}

if(umap.find(cur_sum-sum)!=umap.end())
{
	res = max(res,i-umap[cur_sum-sum]);
}


}
return res;

}
int main()
{
	
	int arr [] = {5,2,3,1,1,1,1,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 5;

	cout<<longest(arr,n,sum);
	return 0;
}