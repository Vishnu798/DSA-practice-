class Solution {
public:
    bool isPerfectSquare(int num) {
           long mid;
    long start = 1;
    long end = num;
    while(start<=end){
         mid = (start+end)/2;
     
        if(mid*mid > num){
            end=mid-1;
            
        }
        if(mid*mid <=num){
       
        start=start+1;
       
    }
    }
        int x = start-1;
    if(x*x == num){
        return true;
    }    
    return false;
    }
};
