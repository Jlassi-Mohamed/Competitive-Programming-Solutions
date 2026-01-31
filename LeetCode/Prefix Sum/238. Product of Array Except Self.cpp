class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz = (int)nums.size();
        vector<int> res(sz, 1);

        // prefix
        int prefix = 1;
        for(int i=0 ;i<sz; i++) {
            res[i] = prefix ;
            prefix *= nums[i];
        }

        //suffix
        int suffix = 1;
        for(int i = sz-1; i>=0; i--) {
            res[i] *= suffix;
            suffix *= nums[i]; 
        }

        return res;
    }
};
