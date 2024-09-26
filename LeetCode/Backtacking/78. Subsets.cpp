class Solution {
public:
    int n;
    vector<vector<int>> res;
    void solve(int ind, vector<int>& subset, vector<int>& nums) {
        res.push_back(subset);
        for(int i=ind; i<n; i++) {
            subset.push_back(nums[i]);
            solve(i+1, subset, nums);
            subset.pop_back();
        }   
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        n = nums.size();
        vector<int>subset = {};
        solve(0, subset, nums);
        return res;

    }
};


