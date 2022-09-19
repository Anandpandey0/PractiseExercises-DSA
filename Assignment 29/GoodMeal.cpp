class Solution {
public:
    int mod = (7+1e9);
    int countPairs(vector<int>& array) {
        int n=array.size();
        unordered_map<int, int> mpp;
        long int count=0;
        
        for(int i=0; i<n; i++){
            mpp[array[i]]++;
          
            for(int x=0; x<=21; x++){
                mpp[array[i]]--;    
                if(mpp.find((1<<x) - array[i])!=mpp.end()) count += mpp[((1<<x) - array[i])];
                mpp[array[i]]++;   
            }
        }

        return (count%mod);
    }
};