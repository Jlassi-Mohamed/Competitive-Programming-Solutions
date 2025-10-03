class Solution {
public:
    int arrangeCoins(long long n) {
        long long res = (sqrt(1 + 8*n) - 1)/2;
        return res;
    }
};
