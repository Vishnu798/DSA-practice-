class Solution {
public:
    int reverse(int x) {
        long long rev=0;
         
        while(x!=0){
            if(rev<INT_MIN/10 || rev > INT_MAX/10){
                return 0;
            }
            int temp = x%10;
            rev = (rev*10) + temp;
            x=x/10;
        }
        return rev; 
        
    }
};
