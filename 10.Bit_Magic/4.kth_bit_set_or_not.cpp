/*Given a number N and a bit number K,
 check if Kth bit of N is set or not.
  A bit is called set if it is 1.
   Position of set bit '1' should be indexed 
   starting with 0 from LSB side in binary representation of the number.

Example 1:

Input: N = 4, K = 0
Output: No
Explanation: Binary representation of 4 is 100, 
in which 0th bit from LSB is not set. 
So, return false.*/


// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        
       return (n & (1 << k)) != 0;
        
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin>>t;//taking testcases
    while(t--)
    {
        long long n;
        cin>>n;//input n
        int k;
        cin>>k;//bit number k
        Solution obj;
        if(obj.checkKthBit(n, k))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}  // } Driver Code Ends