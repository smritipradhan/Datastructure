/*Note :
x&(-x) will return a number which is rightmost bit mask
72
...0000100 1 000
...1111011 0 111 (1s complement)
...1111011 1 000 (2s complement)

do & operation

...0000100 1 000 (x)
...1111011 1 000 (x``)
...0000000 1 000 (rightmost bit mask)

now log(rbm) = return the number of times that num can be expressed as power of 2.

= 3
(2 power 3)

for position we add 1 .*/


// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        cout<<(n&(-n))<<endl;
      return log2(n&(-n))+1;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}
  // } Driver Code Ends