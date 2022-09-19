class Solution {
public:
    
    int dp[105]; 
    int n;
    
    int solve(int i, string &s){
        if(i>=s.size())
            return 1;
        if(s[i]=='0')
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int ans=0;
        //ONe number
        ans+=solve(i+1,s);
        //Two numbers
        if(i+1<n && (s[i]=='1' || (s[i]=='2' &&s[i+1]<='6')))
            ans+=solve(i+2,s);
        return dp[i]=ans;
    }
    
    int numDecodings(string s) {
        n=s.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,s);
    }
};