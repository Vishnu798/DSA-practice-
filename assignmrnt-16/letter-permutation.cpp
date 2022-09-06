class Solution {
    public: 
        void solve(int i,string s,map<string,int>& ans){
            if(i>=s.length()){
                ans[s]++;
                return;
            }
            solve(i+1,s,ans);
            if(s[i]>='a' && s[i]<='z'){
                s[i]=toupper(s[i]);
                solve(i+1,s,ans);
            }
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=tolower(s[i]);
                solve(i+1,s,ans);
             }
            else{
                solve(i+1,s,ans);
            }
        }
public:
    vector<string> letterCasePermutation(string s) {
        map<string,int> ans;
        vector<string> res;
        solve(0,s,ans);
        for(auto it:ans){
            res.push_back(it.first);
        }
        return res;
    }
};
