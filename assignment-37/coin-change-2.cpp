class Solution {
    public:
    int f(int i,vector<int>& arr,int target,vector<vector<int>>& dp){
        if(i==0){
            if(target%arr[i]==0){
                return target/arr[i];
            }
            else{
                return 1e9;
            }
        }
        if(dp[i][target]!=-1){
            return dp[i][target];
        }
        int take=1e9;
        if(target>=arr[i]){
            take = 1+f(i,arr,target-arr[i],dp);
        }
        int not_take = 0+f(i-1,arr,target,dp);
        return dp[i][target] = min(take,not_take);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size(),vector<int>(amount+1,-1));
        int ans = f(coins.size()-1,coins,amount,dp);
        if(ans==1e9){
            return -1;
        }
        return ans;
    }
};
