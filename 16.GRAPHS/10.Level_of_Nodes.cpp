// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    
	    queue<pair<int,int>> q;
	    q.push(make_pair(0,0));
	    int level = 0;
	    bool visited[V];
	    for(int i=0;i<V;i++)
	    {
	        visited[i] = false;
	    }
	    visited[0] = true;
	    while(q.empty()==false)
	    {
	        pair<int,int> u = q.front();
	        q.pop();
	        int f = u.first;
	        int l = u.second;
	        
	        if(f==X)
	        return l;
	        
	        for(auto x:adj[f])
	        {
	            if(visited[x]==false)
	            {
	                q.push(make_pair(x,l+1)); //just relacing the previos val
	                visited[x] = true;
	                
	            }
	        }
	        
	        
	        
	        
	    }
	   return -1; 
	    
	    
	}
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}

  // } Driver Code Ends