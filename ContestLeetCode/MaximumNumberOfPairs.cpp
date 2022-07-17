class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int >um;
        for(auto x:nums)um[x]++;
        int pair=0;
         int unpaired=0;
        for(auto x:um){
            pair+=x.second/2;
            unpaired+=x.second%2;
        }
        vector<int>ans;
        ans.push_back(pair);
        ans.push_back(unpaired);
        return ans;
    }
};