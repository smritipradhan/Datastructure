#include<bits/stdc++.h>
using namespace std;


int sorted_rotated(int arr[],int key)
{
int low = 0;
int high = 6;

while(low<=high)
{
int mid = (high+low)/2;

if(arr[mid] == key)
return mid+1;

else if(arr[mid]>arr[low]) // left half sorted
{
if(key >= arr[low] && key < arr[mid]) //that means the element in that range
high = mid-1;
else
low = mid+1;

}

else //right half sorted
{

if(key <= arr[high] && key > arr[mid]) 
	low = mid+1;
else
	high = mid-1;
}


}

return -1;

}
int main()
{
	int arr[] = {100,200,500,1000,2000,10,20};
	cout<<sorted_rotated(arr,10);

	return 0;
}