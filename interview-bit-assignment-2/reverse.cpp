int Solution::reverse(int A) {
    long long int  rev=0;
 
        while(A!=0){
            int temp=A%10;
            rev=(rev*10)+temp;
            if(rev<INT_MIN || rev>INT_MAX){
                return 0;
            }
            A=A/10;
        }
   
        
        return rev;
      
    
}
