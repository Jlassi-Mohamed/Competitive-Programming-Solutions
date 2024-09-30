class Solution {
public:
    void solve(int& n, int& k, vector<vector<int>>& res, vector<int> v, int curr) {
        if(v.size() == k)
            {
                res.push_back(v);
                return ;
            }

        for(int i=curr; i<=n; i++) {
            v.push_back(i);
            solve(n, k, res, v, i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
         vector<int> v;
        vector<vector<int>> res = {}; 
        solve(n, k, res, v, 1);
        return res;
    }
};
