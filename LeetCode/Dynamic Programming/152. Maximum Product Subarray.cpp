class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = *max_element(nums.begin(), nums.end());
        int curMax = 1, curMin = 1;

        for (int e : nums) {
            int temp = curMax * e;
            curMax = max({temp, curMin * e, e});
            curMin = min({temp, curMin * e, e});

            res = max(res, curMax);
        }

        return res;        
    }
};
