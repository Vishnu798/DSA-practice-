class Solution {
    public:
  int solveDP(vector<int>& coins, int amount) {
        
        int n = coins.size();
        int dp[amount + 1];
        
        for(int i=0; i<=amount; i++)
            dp[i] = INT_MAX;
        
        dp[0] = 0;
        
        for(int i=1; i<=amount; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(coins[j] <= i)
                {
                    int sub_res = dp[i - coins[j]];
                    if(sub_res != INT_MAX)  
                        dp[i] = min(sub_res + 1, dp[i]);
                }
            }
        }
        
        return dp[amount];
        
    }
    
    int coinChange(vector<int>& coins, int amount) {
        // int res = solve(coins, amount, coins.size());
        int res = solveDP(coins, amount);

        if(res != INT_MAX)
            return res;
        return -1;
        
        
    }
};
