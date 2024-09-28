class Solution {
public:
    void solve(vector<vector<int>>& res, vector<int> v, vector<int>& c, int target, int p=0) {
        if(p==c.size())
            return ;
        if(!target) {
            res.push_back(v);
            return;
        }
        for(int i=p; i<c.size(); i++) {
            if(c[i]<=target) {
                v.push_back(c[i]);
                solve(res, v, c, target-c[i], i);
                v.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> v = {};
        solve(res, v, candidates, target);
        return res;
    }
};
