class Solution {
public:
    void solve(vector<string>& res, int n, int open=0, int close=0, string s="") {
        if(open==n && close == n) {
            res.push_back(s);
            return;
        }
        if(open<n) {
            solve(res, n, open+1, close, s+'(');
        }
        if(close<open) {
            solve(res, n, open, close+1, s+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        solve(res, n);
        return res;
    }
};
