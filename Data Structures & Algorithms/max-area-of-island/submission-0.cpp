class Solution {
public:
    int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi=0;
       for(int i=0;i<grid.size();i++)
       {
        for(int j=0;j<grid[0].size();j++)
        {
            if(grid[i][j]==1)
            {
         
               maxi=std::max(maxi,bfs(i,j,grid));
            }
        }
       }
       return maxi;
    }
    private:
      int bfs(int r,int c,std::vector<std::vector<int>>grid)
      {
        int count=1;
        std::queue<pair<int,int>> q;
        q.push({r,c});
        grid[r][c]=0;
        while(!q.empty())
        {
            auto val= q.front();q.pop();
              int row=val.first,col=val.second;
            for(int i=0;i<4;i++)
            {
                int nr=row+ dir[i][0];
                int nc=col+dir[i][1];
                if(nr<grid.size()&&nr>=0&&nc<grid[0].size()&&nc>=0&&grid[nr][nc]==1)
                {
                    count++;
                    q.push({nr,nc});
                    grid[nr][nc]=0;
                }
            }
        }
        return count;

      }
};
