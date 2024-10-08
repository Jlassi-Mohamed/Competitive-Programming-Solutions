class Solution {
public:
    bool isPalindrome(const string& s) {
        if(s.empty())  
            return true;
        string ss = s;
        reverse(ss.begin(), ss.end());
        return ss == s;
    }
    void solve(string& s, vector<string> vs, vector<vector<string>>& res, int ind) {
        if(ind>=s.size())
        {
            res.push_back(vs);
            return ;
        }
        for(int i=ind; i<s.size(); i++) {
            string x = s.substr(ind, i-ind+1);
            if(isPalindrome(x)) {
                vs.push_back(x);
                solve(s, vs, res, i+1);
                vs.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> vs; 
        solve(s, vs, res, 0);
        return res;
    }
};
