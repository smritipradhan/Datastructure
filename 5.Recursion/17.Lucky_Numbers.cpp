// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User-function template for C++

// Complete the function
// n: Input n
// Return True if the given number is a lucky number else return False

class Solution{
public:

   
bool helper(int n,int counter)
{
    if(n<counter)
    {
        return true;
    }
    
    if(n%counter==0)
    {
        return false;
    }
    int f = floor(n/counter);
    helper(n-(f),counter+1);
    
    
    
    
}


bool isLucky(int n)
{
    // code here
    int counter = 2;
    bool res = helper(n,counter);
    return res;
}
};

// { Driver Code Starts.
signed main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        Solution obj;
        //calling isLucky() function
        if(obj.isLucky(n))
            cout<<"1\n";//printing "1" if isLucky() returns true
        else
            cout<<"0\n";//printing "0" if isLucky() returns false
    }
    
}  // } Driver Code Ends