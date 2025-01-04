class Solution {
private:
    int robing(vector<int>& nums) {
        int n=(int)nums.size();
        vector<int> dp(n,-1);
        dp[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            int notPick=dp[i-1];
            int pick=nums[i];
            if(i>1){
                pick+=dp[i-2];
            }
            dp[i]=max(pick,notPick);
        }
        return dp[n-1];
    }
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        vector<int> temp1,temp2;
        for(int i=0;i<nums.size();i++){
            if(i!=0)    temp1.push_back(nums[i]);
            if(i!=nums.size()-1)    temp2.push_back(nums[i]);
        }
        int ans1=robing(temp1);
        int ans2=robing(temp2);
        return max(ans1,ans2);
    }
};
