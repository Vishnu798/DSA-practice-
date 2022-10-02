long Solution::solve(int a, int b) {
    long long int x=a;
    long long int y=b;
    long long int A=a;
    long long int B=b;
   while(A!=B){
       if(A>B){
           A=A-B;
       }
       else{
           B=B-A;
       }
   }
    long long int ans = (x*y)/B;
   return ans;  
}
