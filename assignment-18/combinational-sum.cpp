class Solution {
    public:
    void find(int index, vector<int>& candidates, int target, vector<int>& arr, vector<vector<int>>& ans){
        if(target==0){
            ans.push_back(arr);
            return;
        }
        for(int j=index;j<candidates.size();j++){
            if(j>index && candidates[j] == candidates[j-1]){
                continue;
            }
            if(candidates[j]>target){
                break;
            }
            arr.push_back(candidates[j]);
            find(j+1, candidates, target - candidates[j], arr, ans);
            arr.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    //    sort(candidates.begin(), candidates.end());
        vector<int> arr;
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        for(auto it:candidates){
            cout<<it<<" ";
        }
        find(0, candidates, target, arr, ans);
        return ans;
    }
};
