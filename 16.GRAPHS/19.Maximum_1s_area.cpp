    void DFSRec(vector<vector<int>> &grid, int N, int M, int i, int j, int &count1s)
    {
        if(i >= 0 and i < N and j >= 0 and j < M and grid[i][j] == 1)
        {
            grid[i][j] = 2;
            
            count1s++;
            
            DFSRec(grid, N, M, i, j+1,count1s);
            DFSRec(grid, N, M, i+1, j+1,count1s);
            DFSRec(grid, N, M, i+1, j,count1s);
            DFSRec(grid, N, M, i+1, j-1,count1s);
            DFSRec(grid, N, M, i, j-1,count1s);
            DFSRec(grid, N, M, i-1, j-1,count1s);
            DFSRec(grid, N, M, i-1, j,count1s);
            DFSRec(grid, N, M, i-1, j+1,count1s);
        }
    }
    
    public:
    int findMaxArea(vector<vector<int>> &grid)
    {
        int N = grid.size();
        int M = grid[0].size();
        
        int area = 0;
    
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                if(grid[i][j] == 1)
                {
                    int count1s = 0;
                    
                    DFSRec(grid, N, M, i, j, count1s);
                    
                    area = max(area, count1s);
                }
            }
        }
        
        return area;
    }