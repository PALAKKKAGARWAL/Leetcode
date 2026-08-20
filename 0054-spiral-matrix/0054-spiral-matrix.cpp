class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int top = 0;
        int bottom = matrix.size() - 1;

        int left = 0;
        int right = matrix[0].size() - 1;

        vector<int> arr;

        while (top <= bottom && left <= right) {

            // Left → Right
            for (int i = left; i <= right; i++) {
                arr.push_back(matrix[top][i]);
            }
            top++;

            // Top → Bottom
            if (top <= bottom && left<=right) {
                for (int i = top; i <= bottom; i++) {
                    arr.push_back(matrix[i][right]);
                }
                right--;
            }

            // Right → Left
            if (left <= right && top<=bottom) {
                for (int i = right; i >= left; i--) {
                    arr.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // Bottom → Top
            if (top <= bottom && left<=right) {
                for (int i = bottom; i >= top; i--) {
                    arr.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return arr;
    }
};