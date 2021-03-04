//Union of two unsorted Arrays
#include<bits/stdc++.h>
using namespace std;

int Union(int arr1[],int arr2[],int n,int m)
{
 unordered_set<int> s;
 
 for(int i = 0;i<n;i++)
 {
 
         s.insert(arr1[i]);
     
 }
 for(int j = 0;j<m;j++)
 {
  
         s.insert(arr2[j]);
     
 }
 
 return s.size();   
}
int main()
{
    int arr1[] = {15,10,5,15}; 
    int arr2[] = {15,15,15,20,10};
    
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    cout<<Union(arr1,arr2,n,m);
    
    return 0;
}
