
#include<bits/stdc++.h>
using namespace std;

int last_occ(int arr[],int low,int high,int x);
int first_occ(int arr[],int low,int high,int x);

int countOcc(int arr[],int n,int x)
{
	return last_occ(arr,0,n-1,x)-first_occ(arr,0,n-1,x);
}

int last_occ(int arr[],int low,int high,int x)
{
if(low>high) return -1;

int mid = (low+high)/2;

if(arr[mid]>x)
	return last_occ(arr,low,mid-1,x);

else if(arr[mid]>x)
	return last_occ(arr,mid+1,high,x);

else
{
if(mid==0 || arr[mid+1]!=arr[mid])
	return mid+1;
else
	return last_occ(arr,mid+1,high,x);

}




}
int first_occ(int arr[],int low,int high,int x)
{
if(low>high) return -1;
int mid = (low+high)/2;

if(arr[mid]>x)
	return first_occ(arr,low,mid-1,x);

else if(arr[mid]>x)
	return first_occ(arr,mid+1,high,x);

else
{
if(mid==0 || arr[mid-1]!=arr[mid])
	return mid+1;
else
	return first_occ(arr,low,mid-1,x);

}


}

int main() {
    
   int arr[] = {10, 20, 20, 30, 40, 40}, n = 6;

   int x = 20;

   cout << countOcc(arr, n, x);

	return 0;
}