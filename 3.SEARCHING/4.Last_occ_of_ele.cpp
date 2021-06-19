#include<bits/stdc++.h>
using namespace std;


int last_occ(int arr[],int low,int high,int key)
{
if(low>high)
	return -1;

int mid = (low+high)/2;

if(arr[mid]>key)
	return last_occ(arr,low,mid-1,key);

else if(arr[mid]<key)
	return last_occ(arr,mid+1,high,key);

else
{
if(mid==0 || arr[mid+1]!=arr[mid])
	return mid+1;

else
	return last_occ(arr,mid+1,high,key);


}




}



int main()
{
	int arr[] = {10,20,30,40,50,60,60,60};
	cout<<last_occ(arr,0,7,60);
	return 0;
}
