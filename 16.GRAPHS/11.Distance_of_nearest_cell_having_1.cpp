// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    int rows = grid.size();
	    int cols = grid[0].size();
	    vector<vector<int>>result(rows,vector<int>(cols,INT_MAX-1));
	    
	    queue<pair<int,int>> q;
	    for(int i=0;i<rows;i++)
	    {
	        for(int j=0;j<cols;j++)
	        {
	            if(grid[i][j]==1)
	            {
	                q.push(make_pair(i,j));
	                result[i][j] = 0; // replacing of distance of cell having 1 to 0
	            }
	        }
	    }
	      int dir[4][4] = {{0,1},{1,0},{0,-1},{-1,0}};
	    
	    while(q.empty()==false)
	    {
	    pair<int,int> p = q.front();
	    int x = p.first;
	    int y = p.second;
	    q.pop();
	    for(int i=0;i<4;i++)
	    {
	     int nx = x + dir[i][0]; 
	     int ny = y + dir[i][1];
	     
	     if(nx>=0 && ny>=0 && nx<rows and ny<cols)
	     {
	         if(result[nx][ny] > result[x][y]+1)
	         {
	             result[nx][ny] = result[x][y]+1;
	             q.push(make_pair(nx,ny));
	         }
	         
	     }
	    }
	        
	        
	    }
	    return result;
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/distance-of-nearest-cell-having-1-1587115620/1/?track=DSASP-Graph&batchId=154