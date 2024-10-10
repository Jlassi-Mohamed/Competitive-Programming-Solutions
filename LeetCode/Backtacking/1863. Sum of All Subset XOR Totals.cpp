class Solution {
public:
    int sumXor(vector<int> v) {
        if(v.empty()) return 0;
        if(v.size() == 1) return v[0];
        int res = v[0];
        for(int i=1; i<v.size(); i++) {
            res ^= v[i];
        }
        return res;
    }

    void backtrack(vector<int>& nums, int& res, int ind, vector<int> x) {
        if(ind==nums.size()) {
            return ;
        }
        for(int i = ind; i<nums.size(); i++) {
            x.push_back(nums[i]);
            res += sumXor(x);
            cout << "sumXor = " << sumXor(x) << endl;
            backtrack(nums, res, i+1, x);
            x.pop_back();
        }
    }
    int subsetXORSum(vector<int>& nums) {
        int res = 0; 
        vector<int> x;
        backtrack(nums, res, 0, x);
        return res;
    }
};
