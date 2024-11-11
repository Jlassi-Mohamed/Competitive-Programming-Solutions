class Solution {
private:
    vector<int> dp;
public:
    Solution() : dp(38, -1) {
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
    }

    int tribonacci(int n) {
        if (dp[n] != -1) return dp[n];
        dp[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        return dp[n];
    }
};
