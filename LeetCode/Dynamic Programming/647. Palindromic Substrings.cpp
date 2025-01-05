class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        vector<vector<bool>> palindrome(n, vector<bool>(n, false));
        int res = 0;

        for (int i = 0; i < n; ++i) {
            palindrome[i][i] = true;
            res++;
        }

        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                palindrome[i][i + 1] = true;
                res++;
            }
        }

        for (int len = 3; len <= n; ++len) {
            for (int i = 0; i < n - len + 1; ++i) {
                if (s[i] == s[i + len - 1] && palindrome[i + 1][i + len - 2]) {
                    palindrome[i][i + len - 1] = true;
                    res++;
                }
            }
        }
        return res;
    }
};
