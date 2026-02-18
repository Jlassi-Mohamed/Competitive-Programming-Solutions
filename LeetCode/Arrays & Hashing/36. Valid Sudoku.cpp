class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool appearedInRow[9][9] = {false};
        bool appearedInCol[9][9] = {false};
        bool appearedInBox[9][9] = {false};

        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                if(board[i][j] == '.') continue;
                int digIndex = board[i][j] - '1';
                int boxIndex = (i/3)*3 + (j/3);

                if(appearedInRow[i][digIndex] || appearedInCol[j][digIndex] || appearedInBox[boxIndex][digIndex])
                {
                    return false;
                }
                appearedInRow[i][digIndex] = true;
                appearedInCol[j][digIndex] = true;
                appearedInBox[boxIndex][digIndex] = true;
            }
        }
        return true;
    }
};
