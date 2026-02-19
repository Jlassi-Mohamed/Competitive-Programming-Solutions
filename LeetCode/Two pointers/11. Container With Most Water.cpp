class Solution {
public:
    int maxArea(vector<int>& height) {
        int st = 0, end = (int)height.size()-1;
        int res = 0;
        while(st < end) {
            int x = end - st;
            int y = min(height[st], height[end]);
            int z = x * y;
            if(z > res) res = z;

            if(height[st] < height[end]) st++;
            else end--;

        }   
        return res;
    }
};
