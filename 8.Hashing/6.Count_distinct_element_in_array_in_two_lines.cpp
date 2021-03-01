//Counting the Distinct Elements in an array
#include<bits/stdc++.h>
using namespace std;

int Count_Distinct(int arr[],int n)
{
    unordered_set<int> set(arr,arr+n);
    return set.size();
    
}
int main()
{
    int arr[] = {15, 16, 27, 27, 28, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<Count_Distinct(arr,n);
    return 0;
}

