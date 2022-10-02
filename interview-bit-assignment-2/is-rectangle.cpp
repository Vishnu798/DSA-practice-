int Solution::solve(int A, int B, int C, int D) {
    unordered_map<int,int>m;
    vector<int> arr;
    m[A]++;
    m[B]++;
    m[C]++;
    m[D]++;
   for(auto it:m){
       arr.push_back(it.second);
   }
   if(arr.size()==2){
       if(arr[0]==arr[1]){
           return 1;
       }
       else{
           return 0;
       }
   }
   return 0;
    
}
