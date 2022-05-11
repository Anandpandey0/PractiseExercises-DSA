class Solution {
public:
    bool isPalindrome(int x) {
        int reverse_num =0;
        int reverse = x;
        
        while(x>0){
            if(reverse_num>INT_MAX/10 || (reverse_num==INT_MAX/10 &&  x%10>7)) return false;
            reverse_num = reverse_num *10 + x%10;
            x=x/10;
        }
        if(reverse==reverse_num){
            return 1;
        }
        else{
            return 0;
        }
   
    }
};