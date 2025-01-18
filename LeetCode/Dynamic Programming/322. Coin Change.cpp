class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int x = amount+1;
        vector<int> dp(x, x);
        dp[0] = 0;
        for(int i=1; i<=amount; i++) {
            for(int c : coins) {
                if(i-c >= 0) {
                    dp[i] = min(dp[i], 1 + dp[i-c]);
                }
            }
        }
        return dp[amount] != x ? dp[amount] : -1;
    }
};
