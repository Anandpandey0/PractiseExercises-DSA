class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i , j ;
        //loop to find the break of increasing order from the back
        for(i = nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                break;
            }
        }
        if(i<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            //For loop to find the number which is just greater than nums[i]
            for(j = nums.size()-1;j>i;j--){
                if(nums[j]>nums[i])
                    break;
            }
        }
        swap(nums[i],nums[j]);
        //As the for loop till i is in increasing order. So, reversing them will make it least
        //For example 4321  least will be reverse i.e. 1234
        reverse(nums.begin()+i+1,nums.end());
        
    }
};