class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] == '.') continue;

                int num = board[i][j] - '1';
                int index = (i/3)*3+(j/3);

                if(rows[i][num] || cols[j][num] || boxes[index][num]) return false;
                rows[i][num] = cols[j][num] = boxes[index][num] = true;
            }
        }
        return true;
    }
};
