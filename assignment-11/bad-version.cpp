// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long start=1;
        long mid;
        long end = n;
            while(start<=end){
                mid = (start+end)/2;
                if(isBadVersion(mid)==true){
                    
                    end = mid-1;
                }
                if(isBadVersion(mid)==false){
                    start=mid+1;
                }
            }
           return start;
        
 
    }
};
