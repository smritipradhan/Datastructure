/*If there exist mother vertex (or vertices), then one of the mother 
vertices is the last finished vertex in DFS. (Or a mother vertex 
	has the maximum finish time in DFS traversal).*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
	void DFS(vector<int> adj[],int source,bool visited[],stack<int> &st)
	{
	 visited[source] = true;
	 
	 for(int u:adj[source])
	 {
	     if(visited[u]==false)
	     {
	         DFS(adj,u,visited,st);
	     }
	     
	 }
	 st.push(source);   
	    
	    
	}
	void DFSUtil(int v,bool visit[],vector<int> adj[])
	{
	    visit[v] = true;
	    for(auto x:adj[v])
	    {
	        if(visit[x]==false)
	        {
	            DFSUtil(x,visit,adj);
	        }
	    }
	    
	}
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    int result = -1;
	    stack<int> st;
	    
	    bool visited[V];
	    fill(visited,visited+V,false);
	    
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i]==false)
	        {
	            DFS(adj,i,visited,st);
	        
	            
	        }
	            
	    }
	    int v = st.top();
	     bool visit[V];
	    fill(visit, visit+V,false);
        DFSUtil(v,visit,adj);
        
        for(int i=0;i<V;i++)
        {
            if(visit[i]==false)
            return -1;
        }
        
        return v;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends