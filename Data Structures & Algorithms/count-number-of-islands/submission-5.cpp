class Solution {
    private:
       int direction[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
  void bfs(std::vector<std::vector<char>>&grid,int r,int c)
  {
    std::queue<pair<int,int>> q;
    
    q.push({r,c});
    grid[r][c] = '0';

    while(!q.empty())
    {
       auto [r,c] =q.front();
       q.pop();
       for(int i=0;i<4;i++)
       {
        int nxt_r= r+ direction[i][0];
        int nxt_c=c+ direction[i][1];
        if(nxt_r>=0&&nxt_c>=0&&nxt_r<grid.size()&&nxt_c<grid[0].size()&&grid[nxt_r][nxt_c]=='1')
        {
             q.push({nxt_r,nxt_c});
             grid[nxt_r][nxt_c]='0';
        }
       }
    }


  }

public:
    int numIslands(vector<vector<char>>& grid) {
        int island_count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                    if(grid[i][j]=='1')
                    {
                    bfs(grid,i,j);
                    island_count++;
                    }
            }
        }
     return island_count;
        

    }
};
