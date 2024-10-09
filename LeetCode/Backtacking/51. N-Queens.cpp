class Solution {
public:
    vector<vector<string>> res;
    vector<bool> mainDiag;
    vector<bool> counterDiag;
    vector<bool> col;
    void backtrack(int& n, int row, vector<string>& vs) {
        if(row>=n) {
            res.emplace_back(vs);
            return ;
        }
        for(int i=0; i<n; i++) {
            if(!mainDiag[i+row] && !counterDiag[row-i+n-1] && !col[i]) {
                mainDiag[i+row] = counterDiag[row-i+n-1] = col[i] = true;
                vs[row][i] = 'Q';
                backtrack(n, row+1, vs);
                vs[row][i] = '.';
                mainDiag[i+row] = counterDiag[row-i+n-1] = col[i] = false;
            }
        }
    } 
    vector<vector<string>> solveNQueens(int n) {
        if(n==1)
            return {{"Q"}};
        if(n<=3)
            return {};
        const int N = 2*n-1;
        mainDiag = vector<bool>(N, false);
        counterDiag = vector<bool>(N, false);
        col = vector<bool>(n, false);
        vector<string> vs(n, string(n, '.'));
        backtrack(n, 0, vs);
        return res;
    }

};
