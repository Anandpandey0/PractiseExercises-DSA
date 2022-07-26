class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1){
            if(nums[0]==target){
                return 0;
            }
            return  -1;
        }
        if(nums.size()==0){
            return -1;
        }
        int start =0;
        int end = nums.size();
        int mid = start + (end-start)/2;
        while(start<=end){
            if(target>nums[mid]){
                start=mid+1;
            }
            else if(target==nums[mid]){
                return mid;
            }
            else{
                end = mid -1;
            }
            mid = start + (end-start)/2;
        }
        return -1;
        
    }
};