/*
 * @lc app=leetcode id=264 lang=cpp
 *
 * [264] Ugly Number II
 *
 * https://leetcode.com/problems/ugly-number-ii/description/
 *
 * algorithms
 * Medium (38.13%)
 * Likes:    1398
 * Dislikes: 85
 * Total Accepted:    134.2K
 * Total Submissions: 344.4K
 * Testcase Example:  '10'
 *
 * Write a program to find the n-th ugly number.
 * 
 * Ugly numbers are positive numbers whose prime factors only include 2, 3,
 * 5. 
 * 
 * Example:
 * 
 * 
 * Input: n = 10
 * Output: 12
 * Explanation: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 is the sequence of the first 10
 * ugly numbers.
 * 
 * Note:  
 * 
 * 
 * 1 is typically treated as an ugly number.
 * n does not exceed 1690.
 * 
 */

// @lc code=start
class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> tempVector;
        tempVector.push_back(1);
        int i2 = 0, i3 = 0, i5 = 0, tempMin = 1;
        while(tempVector.size() != n){
            tempMin = min(min(tempVector[i2] * 2, tempVector[i3] * 3), tempVector[i5] * 5);
            if (tempMin == tempVector[i2] * 2) {
                if (tempMin != tempVector.back()) 
                    tempVector.push_back(tempVector[i2] * 2);
                i2++;
            } else if (tempMin == tempVector[i3] * 3) {
                if (tempMin != tempVector.back()) 
                    tempVector.push_back(tempVector[i3] * 3);
                i3++;
            } else if (tempMin == tempVector[i5] * 5) {
                if (tempMin != tempVector.back()) 
                    tempVector.push_back(tempVector[i5] * 5);
                i5++;
            }  
        }
        return tempVector[n - 1];
    }
};
// @lc code=end

