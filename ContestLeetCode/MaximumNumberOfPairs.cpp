class Solution {
public:
    vector<int> numberOfPairs(vector<int>& n) {
        sort(n.begin(),n.end());
        int a=0;
        int b=0;
        int i;
        for (i=0;i<n.size()-1;i++)
            if (n[i]==n[i+1]) {
                a++;
                i++;
            } else b++;
        if (i==n.size()-1) b++;
        return {a,b};
    }
};