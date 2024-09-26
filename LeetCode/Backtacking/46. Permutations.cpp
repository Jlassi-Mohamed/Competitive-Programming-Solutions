class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<bool>& vis, vector<int>& permutation, vector<int>& nums) {
        int n = nums.size();
        if(permutation.size() == n) {
            ans.push_back(permutation);
            return ;
        }
        for(int i=0; i<n; i++) {
            if(vis[i])
                continue;
            vis[i] = true;
            permutation.push_back(nums[i]);
            solve(ans, vis, permutation, nums);
            // undo
            permutation.pop_back(); 
            vis[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> vis(nums.size(), false);
        vector<vector<int>> ans;
        vector<int> permutation;
        solve(ans, vis, permutation, nums);
        return ans;
    }
};

