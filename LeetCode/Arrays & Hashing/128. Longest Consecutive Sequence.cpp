#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = (int)nums.size();
        int maxLen = 0;
        unordered_map<int, int> map;

        for (int num : nums) {
            int left = 0, right = 0;

            if (map.count(num)) 
                continue;

            if (map.count(num - 1))
                left = map[num - 1];

            if (map.count(num + 1))
                right = map[num + 1];

            int sum = 1 + left + right;

            map[num] = sum;
            map[num - left] = sum;
            map[num + right] = sum;

            maxLen = max(maxLen, sum);
        }
        return maxLen;
    }
};
