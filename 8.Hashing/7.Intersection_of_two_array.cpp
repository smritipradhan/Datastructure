//Intersection of two arrays
//Given two array we need to find the disctinct common elements count
#include<bits/stdc++.h>
using namespace std;

int Intersection(int arr1[],int arr2[],int n1,int n2)
{
   unordered_set<int> set1;
   for(int i=0;i<n1;i++)
   {
      set1.insert(arr1[i]);
   }
   int res = 0;
   for(int j = 0;j<n2;j++)
   {
    if(set1.find(arr2[j]) != set1.end())
    {
        res++;
        set1.erase(arr1[j]);
        
    }
   }
    return res;
}
int main()
{
      int arr1[] = {15, 17, 27, 27, 28, 15};
    int arr2[] = {16, 17, 28, 17, 31, 17};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    
    cout<<Intersection(arr1,arr2,n1,n2);
    
    return 0;
}


