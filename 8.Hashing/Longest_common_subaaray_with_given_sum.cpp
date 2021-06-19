#include<bits/stdc++.h>
using namespace std;

int longest_common(int arr1[],int arr2[],int n)
{

int temp[n];

for(int i=0;i<n;i++)
{

	temp[i] = arr1[i]-arr2[i];
}

//now find the longest subarray with the sum 0

unordered_map<int,int> umap;
int cur_sum = 0;
int res = 0;
int sum = 0;

for(int i=0;i<n;i++)
{
	cur_sum += temp[i];

	if(cur_sum == sum)
		res = i+1;

	if(umap.find(cur_sum)==umap.end())
		umap.insert({cur_sum,i});


	if(umap.find(cur_sum-sum) != umap.end())
	{
		res = max(res,i-umap[cur_sum-sum]);
	}



}
return res;





}
int main()
{
	int arr1[] = {0,1,0,0,0,0};
	int arr2[] = {1,0,1,0,0,1};

	int n = sizeof(arr1)/sizeof(arr1[0]);
	

	cout<<longest_common(arr1,arr2,n);


	return 0;
}