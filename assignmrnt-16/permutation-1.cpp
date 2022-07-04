class Solution {
    public:
    void solve(vector<int>& nums, vector<int>& freq, vector<int>& ds, vector<vector<int>>& ans){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
           
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                solve(nums, freq, ds, ans);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> freq;
        vector<vector<int>> ans;
        vector<int> ds;
        for(int i=0;i<nums.size();i++){
            freq.push_back(0);
        }
        solve(nums, freq, ds, ans);
        return ans;
    }
};
