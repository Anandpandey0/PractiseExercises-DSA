class Solution {
public:
    void printSubsets(int index,vector<int>&arr,vector<vector<int>>&ans,vector<int>&A){
        if(index==arr.size()){
            ans.push_back(A);
            return;
            
            
            
        }
        printSubsets(index+1,arr,ans,A);
        A.push_back(arr[index]);
        printSubsets(index+1,arr,ans,A);
        A.pop_back();

        
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>A;
        vector<vector<int>>ans;
        printSubsets(0,nums,ans,A);
        return ans;
    }
};