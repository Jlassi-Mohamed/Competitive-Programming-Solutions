class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> vect(nums.size(), 0);
        int res=1;
        bool checkMultipleZero = false, checkPreviousZero = false;
        for(auto& e : nums)
        {
            if(e == 0)
            {
                if(checkPreviousZero == true)
                {
                    checkMultipleZero = true;
                }
                else
                {
                    checkPreviousZero = true;
                }
            }
            else
            {
                res*=e;
            }

        }
        if(checkMultipleZero == false)
        {
            for(int i = 0; i<nums.size(); i++)
            {
                if(nums[i] == 0)
                {
                    vect.at(i) = res;
                }
                else
                {
                    if(checkPreviousZero == false)
                        vect.at(i) = res / nums.at(i);
                }
            }
        }

        return vect;
    }
};
