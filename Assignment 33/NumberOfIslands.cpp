class Solution {
public:
    int arr[4][2] = {{-1,0}, {1,0}, {0,-1}, {0,1}};
    
    bool isValid(int nI, int nJ, int n, int m){
        if(nI >= 0 && nJ >= 0 && nI < n && nJ < m) return true;
        return false;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m=grid[0].size(), connectedComponent = 0;        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == '1'){
                    grid[i][j] = '0';
                    queue<pair<int, int>> q;
                    connectedComponent += 1;
                    
                    q.push({i,j});
                    while(!q.empty()){
                        auto p = q.front();
                        q.pop();
                        
                        //Search in all 4 directions for '1'
                        for(int k=0; k<4; k++){
                            int nI = p.first + arr[k][0];
                            int nJ = p.second + arr[k][1];
                            
                            if(isValid(nI, nJ, n, m) && grid[nI][nJ] == '1'){
                                grid[nI][nJ] = '0';
                                q.push({nI, nJ});
                            }
                        }
                    }
                }
            }
        }
        return connectedComponent;
    }
};