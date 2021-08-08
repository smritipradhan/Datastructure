//An array is given we need to find the two numbers which occur odd number of times
#include<bits/stdc++.h>
using namespace std;

void ocurring(int arr[],int n)
{
int res1 = 0;
int res2 = 0;


int XOR  = 0;

for(int i=0;i<n;i++)
{
	XOR ^= arr[i];
}

int sn = XOR & (-XOR);


for (int i = 0; i < n; i++) 
        { 
            if ((arr[i] & sn) != 0) 
                res1 = res1 ^ arr[i]; 
            else
                res2 = res2 ^ arr[i]; 
        } 
        
cout<<res1<<" "<<res2;

}
int main()
{
	int n = 8; 
	int arr[] = {1,2,2,4,4,5,5,7};
	ocurring(arr,n);
	return 0;
}