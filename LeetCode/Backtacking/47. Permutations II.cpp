class Solution {
public:
    void solve(vector<vector<int>>& res, int& n, vector<int>& nums, vector<int> v, vector<bool>& vis) {
        if(v.size() == nums.size())
        {
            res.push_back(v);
            return ;
        }
        for(int i=0; i<n; i++) {
            if(vis[i] || (i > 0 && nums[i] == nums[i - 1] && !vis[i - 1]))
                continue;
            v.push_back(nums[i]);
            vis[i] = true;
            solve(res, n, nums, v, vis);
            v.pop_back();
            vis[i] = false;
        }

    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> v;
        int sz = (int)nums.size();
        vector<bool> vis(sz, false);
        sort(nums.begin(), nums.end());
        solve(res, sz, nums, v, vis);
        return res;
    }
};
