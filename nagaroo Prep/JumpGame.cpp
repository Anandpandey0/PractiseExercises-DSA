class Solution {
public:
    bool canJump(vector<int>& nums) {
       int reachableIndex = 0;
      //rechableIndex denotes maximum upto which index we can go
        for(int i =0;i<nums.size();i++){
            if(reachableIndex < i){
                return false;
                
            }
            reachableIndex = max(reachableIndex , i + nums[i]);
        }
        return true;
    }
};