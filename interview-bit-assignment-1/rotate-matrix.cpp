void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    int B[n][n];
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[i].size();j++){
            B[i][j] = A[j][i];
        }
    }
    stack<int> s;
        for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            s.push(B[i][k]);
        }
        for(int j=0;j<n;j++){
            int a = s.top();
            s.pop();
            A[i][j] = a;
        }
    }
    
    
}
