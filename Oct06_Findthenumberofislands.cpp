


class Solution {
    
  public:
    int drow[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dcol[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    // Function to check if the cell is valid for DFS
    bool isValid(vector<vector<char>>& grid, int row, int col, int n, int m) {
        return row >= 0 && row < n && col >= 0 && col < m && grid[row][col] == '1';
    }

    // DFS function to mark all connected lands
    void dfs(vector<vector<char>>& grid, int row, int col, int n, int m) {
        grid[row][col] = '0';

        // Visit all 8 possible directions
        for (int i = 0; i < 8; i++) {
            int newr = row + drow[i];
            int newc = col + dcol[i];

            if (isValid(grid, newr, newc, n, m)) {
                dfs(grid, newr, newc, n, m);
            }
        }
    }

    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1') {  // Found an unvisited land
                    dfs(grid, i, j, n, m);  // Perform DFS to mark the whole island
                    count++;
                }
            }
        }
        return count;
    }
};
