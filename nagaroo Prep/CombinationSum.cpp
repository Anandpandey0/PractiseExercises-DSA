class Solution {
public:
    void recursion(int index,int target,vector<int> &arr,vector<vector<int>>&ans,vector<int>&A){
        if(index==arr.size()){
            if(target==0){
                ans.push_back(A);
            }
            return ;
        }
        if(arr[index]<=target){
            A.push_back(arr[index]);
            recursion(index,target-arr[index],arr,ans,A);
            A.pop_back();
        }
        
        recursion(index+1,target,arr,ans,A);
            
    
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>A;
        recursion(0,target,candidates,ans,A);
        return ans;
        
    }
};