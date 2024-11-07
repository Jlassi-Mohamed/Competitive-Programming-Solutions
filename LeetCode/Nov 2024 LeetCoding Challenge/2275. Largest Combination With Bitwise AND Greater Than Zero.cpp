class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int n = (int)candidates.size(), res = 0;
        for(int i=0;i<32;i++){
            int cnt = 0;
            for(auto candidate : candidates){
                if(candidate & (1<<i))cnt++;
            }
            res = max(res,cnt);
        }
        return res;
    }
};
