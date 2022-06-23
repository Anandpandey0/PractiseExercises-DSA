class Solution {
public:
    int trap(vector<int>& height) {

 vector<int>Prefix;
    
    int n = height.size();
    vector<int>Suffix(n,0);
    int premax=height[0];
    Prefix.push_back(premax);
    int sufmax=height[n-1];
    Suffix[n-1] = sufmax;
    for(int i=1;i<height.size();i++){
        premax = max(premax,height[i]);
        Prefix.push_back(premax);
    }
    
    for(int i=n-2;i>=0;i--){
        sufmax = max(sufmax,height[i]);
        Suffix[i] = sufmax;
    
        
    }
    int output = 0;
    for(int i=0;i<n;i++){
        output += min(Prefix[i],Suffix[i]) - height[i] ;
    
    }
    return output;
    
        
    }
};