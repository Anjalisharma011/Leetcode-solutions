 class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowCount = matrix.size(), colCount = matrix[0].size();
        bool firstRowHasZero = false, firstColHasZero = false;
        for (int col = 0; col < colCount; ++col) {
            if (matrix[0][col] == 0) {
                firstRowHasZero = true;
                break;
            }
        }
        for (int row = 0; row < rowCount; ++row) {
            if (matrix[row][0] == 0) {
                firstColHasZero = true;
                break;
            }
        }
        for (int row = 1; row < rowCount; ++row) {
            for (int col = 1; col < colCount; ++col) {
                if (matrix[row][col] == 0) {
                    matrix[row][0] = 0;
                    matrix[0][col] = 0;
                }
            }
        }
        for (int row = 1; row < rowCount; ++row) {
            for (int col = 1; col < colCount; ++col) {
                if (matrix[row][0] == 0 || matrix[0][col] == 0) {
                    matrix[row][col] = 0;
                }
            }
        }
        if (firstRowHasZero) {
            for (int col = 0; col < colCount; ++col) {
                matrix[0][col] = 0;
            }
        }
        if (firstColHasZero) {
            for (int row = 0; row < rowCount; ++row) {
                matrix[row][0] = 0;
            }
        }
    }
};   