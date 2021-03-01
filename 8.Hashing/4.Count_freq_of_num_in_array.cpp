//Program to count the frequencies of a number using hashing
#include<bits/stdc++.h>
using namespace std;


void countFreq(int arr[],int n)
{
  unordered_map<int, int> umap;
  
  
  for(int i=0;i<n;i++)
  {
   umap[arr[i]]++;   
  }
  unordered_map<int, int>::iterator itr;
  for(itr = umap.begin();itr!=umap.end();itr++)
  {
      cout<<itr->first <<"   "<<itr->second;
      cout<<"\n";
  }
  
    
}
int main()
{
    int arr[10]= {10,10,20,30,70,90,40,80,10,90};
     int n = sizeof(arr)/sizeof(arr[0]);
    countFreq(arr,n);
    
    return 0;
}
