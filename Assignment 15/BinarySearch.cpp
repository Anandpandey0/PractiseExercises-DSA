class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start =0 ;
        int end = nums.size()-1;
        int  mid = start + (end-start)/2;
        while(start<=end){
            mid = start + (end-start)/2;
            if(target>nums[mid]){
                start = mid + 1;
            }
            else if(target < nums[mid]){
                end = mid -1;
            }
            else{
                break;
            }
        }
        if(start>end){
            return {-1,-1};
        }
        int minIndex=mid , maxIndex=mid;
        for(int i = start; i<=end;i++){
            if(nums[i]==target){
                minIndex = min(i,minIndex);
                maxIndex = max(i,maxIndex);
                
            }
        }
        return {minIndex, maxIndex};
        
        
    }
};