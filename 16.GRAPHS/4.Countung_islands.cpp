// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to find the number of islands.
    void connected_components(vector<vector<char>> &grid,int i,int j,vector<vector<bool>> &visited)
    {
    if(i>=0 and i<grid.size() and j>=0 and j<grid[0].size() and grid[i][j]=='1' and visited[i][j]==false)
    {
    visited[i][j] = true;
    
    connected_components(grid,i-1,j,visited);
    connected_components(grid,i,j+1,visited);
    connected_components(grid,i,j-1,visited);
    connected_components(grid,i+1,j,visited);
    
    connected_components(grid,i+1,j+1,visited);
    connected_components(grid,i-1,j-1,visited);
    connected_components(grid,i+1,j-1,visited);
    connected_components(grid,i-1,j+1,visited);
     
    }
    }
    int numIslands(vector<vector<char>>& grid)
    {
        int count = 0;
   
       vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size()));
      
      for(int i=0;i<visited.size();i++)
      {
          for(int j=0;j<visited[i].size();j++)
          {
              visited[i][j] = false;
          }
      }
 //  cout<<visited.size()<<" "<<visited[0].size()<<endl;     
   
        for(int i=0; i<visited.size();i++)
        {
            for(int j=0;j<visited[0].size();j++)
            {
                if(visited[i][j]==false && grid[i][j]=='1')
               { 
                connected_components(grid,i,j,visited);
                count++;
                   
               }
            }
        }
        return count;
              // Code here
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.numIslands(grid);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends


/*4 2
0 1
1 0
1 1
1 0
https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1/?track=DSASP-Graph&batchId=154#
*/

