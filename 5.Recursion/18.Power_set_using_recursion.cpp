// { Driver Code Starts
//Initial Template for C++


// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++



//Function to return the lexicographically sorted power-set of the string.
void solve(string s, string cs, int i, vector<string>&ans)
{
if(i==s.length())
{
ans.push_back(cs);
cout<<cs<<endl;
return;
}
solve(s, cs, i+1, ans);
solve(s, cs+s[i], i+1, ans);
}

//Function to return the lexicographically sorted power-set of the string.
vector <string> powerSet(string s)
{
vector<string>ans;
solve(s, "", 0, ans);
return ans;
}


// { Driver Code Starts.


// Driver code
int main()
{
    int T;
    cin>>T;//testcases
    while(T--)
    {
        string s;
        cin>>s;//input string
        
        //calling powerSet() function
        vector<string> ans = powerSet(s);
        
        //sorting the result of the powerSet() function
        sort(ans.begin(),ans.end());
        
        //printing the result
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }

return 0;
}   // } Driver Code Ends