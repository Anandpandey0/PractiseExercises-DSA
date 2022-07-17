class Solution { 
public: 
    int minOperations(vector<int>& nums, vector<int>& numsDivide) { 
         
        int gcdFinder = numsDivide[0]; 
        for(auto x:numsDivide) 
            gcdFinder = __gcd(gcdFinder, x); 
         
        sort(nums.begin(), nums.end()); 
        int count = 0; 
        int n = nums.size(); 
         
        for(int i=0;i<nums.size();i++){ 
            if(nums[i]==gcdFinder) 
                break; 
            if(gcdFinder%nums[i]==0) 
                break; 
            if(nums[i]!=gcdFinder)  
                count += 1; 
        } 
 
        if(count==n) 
            return -1; 
        else 
            return count; 
    } 
};