class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int left ,right,both;
        int minIndex =0 , maxIndex =0;
        if (nums.size() == 1 || nums.size() == 2)
        {
            return nums.size();
        }
        for(int i =1;i<nums.size();i++){
            if(nums[i]>nums[maxIndex]){
                maxIndex = i;
            }
            else if(nums[i]<nums[minIndex]){
                minIndex= i;
            }
            else continue;
        }
        //If deleted form Left Side 
        left = max(maxIndex + 1,minIndex + 1);
        //If deleted from right side
        right = max((nums.size() - maxIndex ) ,( nums.size() - minIndex));
        //If deletion is done from both side 
        both = nums.size() - (max(maxIndex,minIndex) - min(maxIndex,minIndex) +1) + 2;
        
        return min(both , min(left,right));
        
        

        
    }
};