class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res;
        int num = 1 << n; // 2^n
        for (int i = 0; i < num; ++i) {
            res.push_back(i ^ (i >> 1));
        }
        return res;
    }
};
