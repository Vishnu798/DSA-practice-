int Solution::solve(vector<int> &A) {
    int n = A.size();
    int result=0;
    vector<int> pre(n);
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            pre[i] = A[i];
        }
        else{
            pre[i] = max(pre[i+1],A[i]);
        }
    }
    set<int> s;
    s.insert(A[0]);
    for(int i=1;i<n;i++){
        s.insert(A[i]);
        auto it = s.find(A[i]);
        if(it!=s.begin() && pre[i]!=A[i]){
        result = max(result,(*--it)+A[i]+pre[i]);
    }
    }
    return result;
}
