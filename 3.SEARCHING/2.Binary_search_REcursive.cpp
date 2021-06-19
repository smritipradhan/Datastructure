//Binary Search Recursive
#include<bits/stdc++.h>
using namespace std;


int binary_search(int arr[],int key,int low,int high)
{

if(low>high)
    return -1;
int mid = (low+high)/2;


if(arr[mid]==key)
    return mid+1;


if(arr[mid]>key)
{
return binary_search(arr,key,low,mid-1);
}
else
{
return binary_search(arr,key,mid+1,high);
}




}
int main()
{
    int arr[] = {10,20,30,40,50};
    cout<<binary_search(arr,30,0,4);


    return 0;
}