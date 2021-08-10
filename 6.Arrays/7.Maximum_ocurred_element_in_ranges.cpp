// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
class Solution{
    public:
    // L and R are input array
    // maxx : maximum in R[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in L[] and R[]
    //Function to find the maximum occurred integer in all ranges.
    int maxOccured(int L[], int R[], int n, int maxx){
    
        // Your code here
      
    int arr[maxx+2] = {0};
   // cout<<maxx;
    for(int i = 0; i < n; i++)
    {
        arr[L[i]] += 1;
        arr[R[i]+1] -= 1;
    }
    for(int i = 0; i < maxx; i++)
    {
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int maxi = arr[0], res = 0;
    for(int i = 1; i < maxx; i++)
    {
        arr[i] += arr[i-1];
        
        if(maxi < arr[i])
        {
            maxi = arr[i];
            res = i;
        }
    }
    
    return res;
        
    }
};


// { Driver Code Starts.

int main() {
	
	int t;
	
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n;
	    
	    //taking size of array
	    cin >> n;
	    int L[n];
	    int R[n];
	    
	    //adding elements to array L
	    for(int i = 0;i<n;i++){
	        cin >> L[i];
	    }
	    
	    int maxx = 0;
	    
	    //adding elements to array R
	    for(int i = 0;i<n;i++){
	        
	        cin >> R[i];
	        if(R[i] > maxx){
	            maxx = R[i];
	        }
	    }
	    Solution ob;
	    
	    //calling maxOccured() function
	    cout << ob.maxOccured(L, R, n, maxx) << endl;
	}
	
	return 0;
}  // } Driver Code Ends