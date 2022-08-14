class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int top =0;
        int bottom = matrix.size()-1;
        int left = 0;
        int right = matrix[0].size()-1;
        int dir = 0;
        while(left<=right && top<=bottom){
            if(dir==0){
                //left to right
                for(int i = left ;i<=right;i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            if(dir==1){
                //top to bottom 
                for(int i = top ;i<=bottom ; i++){
                    ans.push_back(matrix[i][right]);
                    
                }
                right--;
            }
            if(dir ==2){
                //right to left
                for(int i= right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(dir==3){
                //bottom to top
                for(int i = bottom ;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            dir = (dir+1)%4;
        }
        return ans;
    }
};