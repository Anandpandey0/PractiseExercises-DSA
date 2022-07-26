class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int s=0;
        int e = num;
        long long int mid = s + (e-s)/2;
        while(s<=e){
            long long int x = mid*mid;
            if(x>num){
                e= mid -1;
            }
            else if(x<num){
                s=mid+1;
            }
            else{
                return true;
            }
            mid = s + (e-s)/2;
        }
        return false;
    }
};