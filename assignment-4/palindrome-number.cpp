class Solution {
public:
    bool isPalindrome(int x) {
        long n = x;
        long rev=0;
         if(n<0){
            return 0;
        }
        if(n==10){
            return 0;
        }
        if(n>0){
            while(n > 0){
                long temp = n%10;
                 rev = (rev*10) + temp;
                n=n/10;
            }
           
        }
       
        if(rev == x){
            return 1;
        }
        return 0;
    }
};
