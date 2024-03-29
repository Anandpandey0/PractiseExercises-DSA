class Solution {
public:
    int dir[4][2] = {{0, 1}, {0,-1}, {1, 0}, {-1, 0}};
    
    int trapRainWater(vector<vector<int>>& heightMap) {
        int ans = 0;
        int r = heightMap.size();
        int c = heightMap[0].size();
        typedef pair<int, pair<int, int>> ppi;
        priority_queue<ppi, vector<ppi>, greater<ppi>> pq;
        vector<vector<bool>> vis(r, vector<bool> (c, 0));
        
        //pushing all boundaries values to pq
        for(int i = 0; i < r; ++i){
            pq.push({heightMap[i][0], {i, 0}});
            pq.push({heightMap[i][c-1], {i, c-1}});
            vis[i][0] = true;
            vis[i][c-1] = true;
        }
        for(int i = 0; i < c; ++i){
            pq.push({heightMap[0][i], {0, i}});
            pq.push({heightMap[r-1][i], {r-1, i}});
            vis[0][i] = true;
            vis[r-1][i] = true;
        }
        
        //now pop out min height node and push boundary inwards by adding nearby cells
        int mxHeight = 0;
        while(!pq.empty()){
            int h = pq.top().first;
            int i = pq.top().second.first;
            int j = pq.top().second.second;
            mxHeight = max(mxHeight, h);
            pq.pop();
            for(int d = 0; d < 4; ++d){
                int x = i + dir[d][0];
                int y = j + dir[d][1];
                if(!(x < 0 || y < 0 || x >= r || y >= c) && vis[x][y] == false){
                    pq.push({heightMap[x][y], {x, y}});
                    vis[x][y] = true;
                    
                    //check if the new node has height less then max height then add it to answer
                    if(mxHeight > heightMap[x][y]) ans += mxHeight - heightMap[x][y];
                }

            }
        }return ans;
    }
};