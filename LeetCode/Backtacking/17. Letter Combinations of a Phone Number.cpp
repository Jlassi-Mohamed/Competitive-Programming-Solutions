class Solution {
private:
    unordered_map<char, string> m = {
        {'2', "abc"}, 
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };

public:
    void solve(string& s, vector<string>& res, int p=0, string xs="") {
        if(p == s.size()) {
            res.push_back(xs);
            return;
        }
        
        string ss = m[s[p]]; 
        for(int i = 0; i < ss.size(); i++) {
            xs.push_back(ss[i]);
            solve(s, res, p+1, xs);
            xs.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {}; 
        
        vector<string> res;
        solve(digits, res);
        return res;
    }
};
