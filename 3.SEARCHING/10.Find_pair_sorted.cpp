#include<bits/stdc++.h>
using namespace std;


void isPresent(int arr[],int n,int sum)
{
int i = 0;
int j = n-1;

while(i<=j)
{

if(arr[i]+arr[j] == sum)
	{
	cout<<arr[i]<<" "<<arr[j];
	break;
	}
else if(arr[i]+arr[j] > sum)
	j--;

else 
	i++;

}


}
int main()
{

    int arr[] = {2, 3, 7, 8, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 14;
    
    int p,q;
    isPresent(arr, n, sum);
    
return 0;
}