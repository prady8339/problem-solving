class Solution {

public:
    int change(int amount, vector<int>& coins) {
       vector<int> dp(amount + 1, 0);
        dp[0] = 1;
        int n = coins.size();
        for (int i = 0 ; i < n ; i++) {
            for (int j = 0; j <= amount; j++) {
                if(j>=coins[i])
                dp[j] += dp[j - coins[i]];
            }
        }
        
        return dp[amount];
    }
};