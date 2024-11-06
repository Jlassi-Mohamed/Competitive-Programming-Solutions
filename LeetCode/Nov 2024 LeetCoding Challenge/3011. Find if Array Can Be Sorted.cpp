class Solution {
public:
    bool canSortArray(const std::vector<int> &nums) {
        int n = nums.size();
        if (n <= 1) return true; 

        int pmax = INT_MIN, cmin = INT_MAX, cmax = INT_MIN;
        int pcnt = -1;

        for (const auto& v : nums) {
            int ccnt = __builtin_popcount(v);
            if (pcnt == ccnt) {
                cmin = std::min(cmin, v);
                cmax = std::max(cmax, v);
            } else {
                if (cmin < pmax) {
                    return false;
                }
                pmax = cmax;
                cmin = cmax = v;
                pcnt = ccnt;
            }
        }
        return cmin >= pmax;
    }
};
