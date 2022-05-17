class Solution {
public:
    int mySqrt(int x) {
       long mid;
    long start = 1;
    long end = x;
    while(start<=end){
         mid = (start+end)/2;
     
        if(mid*mid > x){
            end=mid-1;
            
        }
        if(mid*mid <=x){
       
        start=start+1;
       
    }
    }
    return start-1; 
    }
};
