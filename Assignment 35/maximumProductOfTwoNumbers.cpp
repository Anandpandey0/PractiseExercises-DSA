class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = INT_MIN, max2 = INT_MIN;
        for(auto i :nums){
            if(i>max1){
                max2 = max1;
                max1 = i;
                
            }
            else if(i>max2){
                max2 = i;
            }
        }
        //cout<<max1<<" "<<max2;
        int result = (max1-1) * (max2-1);
        return result;
        
    }
};