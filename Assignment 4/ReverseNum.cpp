class Solution {
public:
    int reverse(int x) {
        long long reverse_num= 0;
        if(x>0){
        while(x>0){
            reverse_num = reverse_num * 10 + x%10;
            x=x/10;
        }
    }
        else if(x<0){
        int y = -x;
        while(y>0){
            reverse_num = reverse_num *10 + y%10;
            y = y/10;
        }
        reverse_num = -reverse_num;
    }
         else{
        
    }
        return reverse_num;
    }
};