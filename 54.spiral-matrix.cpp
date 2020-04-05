/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 *
 * https://leetcode.com/problems/spiral-matrix/description/
 *
 * algorithms
 * Medium (32.19%)
 * Likes:    1910
 * Dislikes: 520
 * Total Accepted:    329.1K
 * Total Submissions: 998K
 * Testcase Example:  '[[1,2,3],[4,5,6],[7,8,9]]'
 *
 * Given a matrix of m x n elements (m rows, n columns), return all elements of
 * the matrix in spiral order.
 * 
 * Example 1:
 * 
 * 
 * Input:
 * [
 * ⁠[ 1, 2, 3 ],
 * ⁠[ 4, 5, 6 ],
 * ⁠[ 7, 8, 9 ]
 * ]
 * Output: [1,2,3,6,9,8,7,4,5]
 * 
 * 
 * Example 2:
 * 
 * Input:
 * [
 * ⁠ [1, 2, 3, 4],
 * ⁠ [5, 6, 7, 8],
 * ⁠ [9,10,11,12]
 * ]
 * Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 * 
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.size() == 0) {
            return ans;
        }
        if(matrix[0].size() == 0) {
            return ans;
        }
        int up = 0, bottum = matrix.size(), left = 0, right = matrix[0].size(), i = 0, j = 0;
        int totalNum = bottum * right;
        bottum -= 1;
        right -= 1;
        int direction = 0; // 0 right, 1 down, 2 left, 3 right
        while (ans.size() < totalNum - 1) {
            switch (direction){
            case 0:
                while(j < right){
                    ans.push_back(matrix[i][j++]);
                }
                up += 1;
                direction = (direction + 1) % 4;
                break;
            case 1:
                while(i < bottum){
                    ans.push_back(matrix[i++][j]);
                }
                right -= 1;
                direction = (direction + 1) % 4;
                break;
            case 2:
                while(j > left){
                    ans.push_back(matrix[i][j--]);
                }
                bottum -= 1;
                direction = (direction + 1) % 4;
                break;
            case 3:
                while(i > up){
                    ans.push_back(matrix[i--][j]);
                }
                left += 1;
                direction = (direction + 1) % 4;
                break;
            default:
                break;
            }
        }
        if(ans.size() != totalNum) {
            ans.push_back(matrix[i][j]);
        }
        return ans;
    }
};
// @lc code=end

