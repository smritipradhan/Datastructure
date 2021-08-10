#include<bits/stdc++.h>
using namespace std;

int remove_dup(int arr[],int n)
{
int res = 1;

for(int i=1;i<n;i++)
{
if(arr[res-1]!=arr[i])
{
	
	arr[res] = arr[i];
	res++;
}

}
return res;




}


int main()
{
	int n = 6;
	int arr[] = {10,10,20,30,30,30};
	int res = remove_dup(arr,n);

	for(int i=0;i<res;i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}