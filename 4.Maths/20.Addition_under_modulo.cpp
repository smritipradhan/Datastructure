// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int additionUnderModulo(long long a,long long b)
    {
        //your code here
        int M = 1000000007;
        return ((a%M)+(b%M)%M);
    }
};

// { Driver Code Starts.
int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    
	    //taking input a and b
	    cin>>a>>b;
	    Solution ob;
	    //calling multiplicationUnderModulo() function
	    cout<<ob.additionUnderModulo(a,b)<<endl;
	}
	return 0;
}  // } Driver Code Ends