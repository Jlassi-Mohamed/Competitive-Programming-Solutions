class Solution {

public:
    bool exist(vector<int>& nums, int& target) {
        int mid;
        int sz = (int)nums.size();
        if(nums.back()<sz) return sz;
        if(nums[0]!=0) return 0;
        int start = 0;
        int end = (int)nums.size() - 1;
        while(start<=end){
            mid = (start + end)/2;
            if(nums[mid] == target) return true;
            nums[mid] > target ? end = mid -1 : start = mid+1;
        }
        return false;
    }
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = (int)nums.size();
        for(int i=0; i<=n; i++) {
            if(exist(nums,i) == false) return i;
        }
        return n;
    }
};
