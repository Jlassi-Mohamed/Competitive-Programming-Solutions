class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int iterations = 1<<n;
        
        vector<vector<int>> res;
        for(int i=0; i<iterations; i++) {
            vector<int> subset;
            for(int j=0; j<n; j++) {
                if(i&(1<<j)) {
                    subset.push_back(nums[j]);
                }
            }
            res.push_back(subset);
        }
        return res;
    }
};
