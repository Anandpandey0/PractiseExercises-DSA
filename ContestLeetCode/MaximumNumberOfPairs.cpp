class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int >ump;
        for(auto x:nums)ump[x]++;
        int pdpair=0;
         int unpaired=0;
        for(auto x:ump){
            pdpair+=x.second/2;
            unpaired+=x.second%2;
        }
        vector<int>vect;
        vect.push_back(pdpair);
        vect.push_back(unpaired);
        return vect;
    }
};