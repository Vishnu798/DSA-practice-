vector<int> Solution::findPerm(const string A, int B) {
    unordered_map<int,int> m;
    vector<int> arr;
    int a=1;
    int b=B;
    for(int i=1;i<=B;i++){
        m[i]=i;
    }
    for(int i=0;i<A.length();i++){
        if(A[i]=='I'){
            arr.push_back(a);
            m.erase(a);
            a++;
        }
        else{
            arr.push_back(b);
            m.erase(b);
            b--;
        }
    }
     for(auto it:m){
        arr.push_back(it.first);
    }
    return arr;
    
}
