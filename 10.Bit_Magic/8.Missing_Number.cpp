//Given an array that has range 1 to n+1 .Every element appear eaxctly once
//Hence find the missing number

#include<bits/stdc++.h>
using namespace std;

int missing_number(int arr[],int n)
{
int result = arr[0];
for(int i=1;i<n;i++)
{
	result ^= arr[i];
}

for(int i=1;i<=n+1;i++)
{

result ^=i;

}
return result;


}
int main()
{
	int n = 3;
	int arr[] =  {1,4,3};
	cout<<missing_number(arr,n);
	return 0;
}


//Note -- Variation if the numbers are in range