// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int> st;
        int p;
        for(int i=0;i<S.length();i++)
        {
         char c = S[i];
         if(c>='0' && c<='9')
         {
             st.push(c-'0'); // converts c to numeric digit
         }
         else
         {
             int op1 = st.top();st.pop();
             int op2 = st.top();st.pop();
             if(c=='+')
             {
                 st.push(op2+op1);
             }
             else if(c=='-')
             {
                 st.push(op2-op1);
             }
             else if(c=='*')
             {
                 st.push(op2*op1);
             }
             else if(c=='/')
             {
                 st.push(op2/op1);
             }
             
         }
            
            
        }
        int res = st.top();
        return res;
        
        
        
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
