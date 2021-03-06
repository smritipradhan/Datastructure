// { Driver Code Starts
// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends



class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        if(str1.size() != str2.size())
        {
            return false;
        }
        
        int hash1[256];
        memset(hash1, -1, sizeof(hash1));
        
        int hash2[256];
        memset(hash2, -1, sizeof(hash2));
        
        int index1 = 0, index2 = 0;
        
        for(int i = 0; i < str1.size(); i++)
        {
            if(hash1[str1[i]] == -1)
            {
                hash1[str1[i]] = index1++;
            }
            
            if(hash2[str2[i]] == -1)
            {
                hash2[str2[i]] = index2++;
            }
            
            if(hash1[str1[i]] != hash2[str2[i]])
            {
                return false;
            }
        }
        
        return true;
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    
    string s1,s2;
    s1 = "aab";
    s2 = "xxy";
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    
    
    return 0;
}  // } Driver Code Ends