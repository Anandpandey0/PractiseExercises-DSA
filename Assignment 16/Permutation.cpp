class Solution {
private:
    void findPairs(vector<int>nums,vector<vector<int>>& ans, int index){
        if(index>=nums.size()){
            ans.push_back(nums);
        }
        for(int i = index; i<nums.size();i++){
            //Giving chance to each element at i position one by one
            swap(nums[index],nums[i]);
            findPairs(nums,ans,index+1);
            //returning to root elemt through backtracking
            swap(nums[index],nums[i]);

        }
        
       
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index = 0;
        findPairs(nums,ans,index);
        return ans;
    }
};