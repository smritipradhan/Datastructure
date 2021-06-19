#include<bits/stdc++.h>
using namespace std;


int last_occ(int arr[],int low,int high,int key)
{

	
while(low<=high)
	{

int mid = (low+high)/2;

if(arr[mid]>key)
	high = mid-1;

else if(arr[mid]<key)
	low = mid+1;

else
{
if(mid==0 || arr[mid+1]!=arr[mid])
	return mid+1;

else
	low = mid+1;


}
}


return -1;

}



int main()
{
	int arr[] = {10,20,30,40,50,60,60,60};
	cout<<last_occ(arr,0,7,60);
	return 0;
}
