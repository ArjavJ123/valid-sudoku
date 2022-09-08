class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9;
       vector<vector<int>> rows(n, vector<int>(n)) ,cols(n, vector<int>(n)), boxes(n, vector<int>(n));
        
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (board[r][c] != '.') {
                    int pos = board[r][c] - '1';

                // Check the row
                if (rows[r][pos] == 1) {
                    return false;
                }
                rows[r][pos] = 1;

                // Check the column
                if (cols[c][pos] == 1) {
                    return false;
                }
                cols[c][pos] = 1;

                // Check the box
                int idx = (r / 3) * 3 + c / 3;
                if (boxes[idx][pos] == 1) {
                    return false;
                }
                boxes[idx][pos] = 1;
                }
            }
        }
        return true;
    }
    
};
