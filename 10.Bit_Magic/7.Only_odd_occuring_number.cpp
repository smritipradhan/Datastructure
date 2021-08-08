//all the numbers appear even number of times except one number 
//apprearing odd number of time.we need to fine that number

#include<bits/stdc++.h>
using namespace std;

int odd_occuring(int arr[],int n)
{
int res = arr[0];

for(int i=1;i<n;i++)
{
res = res ^ arr[i];

}
return res;

}
int main()
{
	int n = 7;
	int arr[] = {4,3,4,4,4,5,5};
	cout<<odd_occuring(arr,n);
	return 0;
}