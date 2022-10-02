vector<int> Solution::allFactors(int n) {
    vector<int> arr;
    set<int> s;
    // if(n==1){
    //     arr.push_back(1);
    //     return arr;
    // }
   // arr.push_back(1);
    ///arr.push_back(n);
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
           s.insert(i);
           s.insert(n/i);
        }
    }
    for(auto it:s){
        arr.push_back(it);
    }
  
    return arr;
  
}
