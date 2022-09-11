class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kadane's Algorithm 
        
        int maxSoFar = INT_MIN;
        int maxEndingHere = 0;
  
        for (int i = 0; i < nums.size(); i++){
            maxEndingHere = maxEndingHere + nums[i];
            if (maxSoFar < maxEndingHere)
            maxSoFar = maxEndingHere;
  
            if (maxEndingHere < 0)
                maxEndingHere = 0;
        }
        return maxSoFar;
        
    }
};