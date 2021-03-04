//Find pair with given sum in Unsorted array in O(n) time complexity.

#include<bits/stdc++.h>
using namespace std;

bool SumPair(int arr[],int sum,int n)
{
 unordered_set<int> s;
 for(int i=0;i<n;i++)
 {
 if(s.find(sum-arr[i]) != s.end())
 {
  return true;
     
 }
 s.insert(arr[i]);
 }   
 
 return false;
}
int main()
{
    int arr[] = {10,2,34,23,22,45,34,22};
    int sum = 12;
    int n  = sizeof(arr)/sizeof(arr[0]);
    cout<<SumPair(arr,sum,n);
    return 0;
}
