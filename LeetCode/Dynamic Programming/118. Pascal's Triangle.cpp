class Solution {
public:
    vector<vector<int>> generate(int numsRows) {
        vector<vector<int>> res;
        for(int i=0; i<numsRows; i++) {
            vector<int> x(i+1, 1);
            for(int j=1; j<i; j++) {
                x[j] = res[i-1][j-1] + res[i-1][j];
            }
            res.push_back(x);
        }
        return res;
    }
};
