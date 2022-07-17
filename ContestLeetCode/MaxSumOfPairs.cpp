class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map <int,priority_queue<int>> ma;
        int my = -1;
        for(int i=0;i<nums.size();i++)
        {
            int sum = 0;
            int n = nums[i];
            while(n>0)
            {
              sum += n%10;
                n/=10;
            }
            ma[sum].push(nums[i]);
            if(ma[sum].size()>=2)
            {
                int p = ma[sum].top();
                ma[sum].pop();
                int q = ma[sum].top();
                ma[sum].push(p);
                my = max(my,p+q);
            }
        }
        return my;
    }
};