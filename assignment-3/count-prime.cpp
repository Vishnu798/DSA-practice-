class Solution {
public:
    int countPrimes(int n) {
       
        if(n<2){
            return 0;
        }
        vector<bool>arr(n, true);
        for(int i=2;i<sqrt(n);i++){
           
                for(int j=i*i;j<n;j+=i){
                    arr[j]=false;
                }
            
            
        }
         int count=0;
        for(int i=2;i<n;i++){
        if(arr[i]==true)
            count++;
        
        }
        return count;
        
    }
};
