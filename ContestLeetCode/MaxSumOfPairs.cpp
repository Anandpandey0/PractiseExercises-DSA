class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map <int,priority_queue<int>> m;
        int mx = -1;
        for(int i=0;i<nums.size();i++)
        {
            int sum = 0;
            int n = nums[i];
            while(n>0)
            {
              sum += n%10;
                n/=10;
            }
            m[sum].push(nums[i]);
            if(m[sum].size()>=2)
            {
                int p = m[sum].top();
                m[sum].pop();
                int q = m[sum].top();
                m[sum].push(p);
                mx = max(mx,p+q);
            }
        }
        return mx;
    }
};



public:
    vector<int> a[101];
    int maximumSum(vector<int>& nums) {
        for (int i=0;i<nums.size();i++) {
            int x=0;
            int xx=nums[i];
            while (nums[i]>0) {
                x+=nums[i]%10;
                nums[i]/=10;
            }
            a[x].push_back(xx);
        }
        int res=-1;
        for (int i=0;i<=100;i++) {
            sort(a[i].begin(),a[i].end());
            if (a[i].size()>=2) {
                if (a[i][a[i].size()-1]+a[i][a[i].size()-2]>res) res=a[i][a[i].size()-1]+a[i][a[i].size()-2];
            }
        }
        return res;
    }
};