class Solution {
private:
    vector<vector<int>> vis;
    int rows, cols, nbValidCells;
    vector<int> dx, dy;
public:

    bool isValid(int x, int y) {
        return (x>=0 && x<rows && y>=0 && y<cols);
    }

    void backtrack(vector<vector<int>>& grid, int cnt, int x, int y, int& res) {
        if(!isValid(x, y) || vis[x][y]==1 || grid[x][y]==42 || grid[x][y] == -1)
            return ;

        if(grid[x][y] == 2 && cnt == nbValidCells) {
            res++; return ;
        }
        
        cnt++;
        vis[x][y] = 1;
        if(grid[x][y] == 1) 
            grid[x][y]=42;
        for(int i=0; i<4; i++) {
            int nx = x+dx[i];
            int ny = y+dy[i];
            backtrack(grid, cnt, nx, ny, res);
        }
        vis[x][y] = 0;
        cnt--;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        rows = grid.size();
        cols = grid[0].size();
        int sx, sy;
        nbValidCells = 1;
        dx = {-1, 1, 0, 0};
        dy = {0, 0, -1, 1};
        vis = vector<vector<int>> (rows, vector<int>(cols, 0));
        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                if(grid[i][j] == 1) {
                    sx = i;
                    sy = j;
                }
                else if(grid[i][j] == 0)
                    nbValidCells++;
            }
        }
        int res = 0;
        backtrack(grid,0, sx, sy, res);
        return res;
    }
};
