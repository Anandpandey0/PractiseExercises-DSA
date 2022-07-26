class Solution {
public:
    long long int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        int s=0;
        int e = x;
        int ans = -1;
        long long int mid = s + (e-s)/2;
        while(s<=e){
            long long int square = mid * mid;
            if(square < x){
                ans = mid;
                s = mid+1;
                
            }
            else if(square>x){
                e= mid-1;
            }
            else{
                return mid;
            }
            //cout<<s<<" "<<e<<endl;
            mid = s + (e-s)/2;
        }
        return ans;
    }
};