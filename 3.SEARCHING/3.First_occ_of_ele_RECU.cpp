#include<bits/stdc++.h>
using namespace std;

int first_Occ(int arr[],int low,int high,int x)
{
if(low>high)
	return -1;

int mid = (low+high)/2;

if(arr[mid]>x)
{
	return first_Occ(arr,low,mid-1,x);
}
else
if(arr[mid]<x)
{
	return first_Occ(arr,mid+1,high,x);
}

else
{
if(mid==0 || arr[mid-1]!=arr[mid])
	return mid+1;

else
{
	return first_Occ(arr,low,mid-1,x);
}


}



}
int main()
{
	int arr[] = {2,3,4,6,7,8,8};
	cout<<first_Occ(arr,0,6,8)<<"th position";
	return 0;
}