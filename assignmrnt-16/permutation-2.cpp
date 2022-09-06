class Solution {
    public:
    void solve(vector<int>& nums,vector<int>& ds,set<vector<int>>& s,vector<int> freq){
        if(ds.size()==nums.size()){
            s.insert(ds);
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                solve(nums,ds,s,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        set<vector<int>> s;
        vector<int>ds;
        vector<int> freq(nums.size(),0);
        solve(nums,ds,s,freq);
        for(auto it:s){
            result.push_back(it);
        }
        return result;
    }
};
