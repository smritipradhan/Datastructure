// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to find median of the array elements.
    int median(int arr[],int N)
    {
        
        sort(arr,arr+N);
        if(N%2==0) //even number of elements
        {
            return (arr[N/2]+arr[N/2-1])/2;
            
            
        }
        else
        {
            return arr[(N/2)];
            
        }
        
        
        //your code here
        //If median is in fraction then convert it to integer and return
    }
    //Function to find mean of the array elements.
    int mean(int arr[],int N)
    {
        //your code here
        int sum = 0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        return floor(sum/N);
    }
};


// { Driver Code Starts.

int main()
{
    //testcase
    int T;
    cin>>T;
   
    //looping testcase
    while(T--)
    {
        //number of elements in array
        int N;
        cin>>N;
        int a[N];
        
        //inseting elements in the array
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        Solution ob;
        //calling mean() and median() functions
        cout<<ob.mean(a,N)<<" "<<ob.median(a,N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends