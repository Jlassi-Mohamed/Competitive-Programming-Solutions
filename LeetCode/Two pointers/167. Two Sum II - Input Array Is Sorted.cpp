class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st = 0, end = (int)numbers.size()-1;
        while(st < end) {
            int x = numbers[st] + numbers[end];
            if (x == target) {
                return {st+1, end+1};
            }
            if(x < target) {
                st++;
            }
            else {
                end--;
            }
        }
        return {-1, -1};
    }
};
