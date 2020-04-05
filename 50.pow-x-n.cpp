/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 *
 * https://leetcode.com/problems/powx-n/description/
 *
 * algorithms
 * Medium (28.89%)
 * Likes:    1231
 * Dislikes: 2739
 * Total Accepted:    422.5K
 * Total Submissions: 1.4M
 * Testcase Example:  '2.00000\n10'
 *
 * Implement pow(x, n), which calculates x raised to the power n (x^n).
 * 
 * Example 1:
 * 
 * 
 * Input: 2.00000, 10
 * Output: 1024.00000
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 2.10000, 3
 * Output: 9.26100
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: 2.00000, -2
 * Output: 0.25000
 * Explanation: 2^-2 = 1/2^2 = 1/4 = 0.25
 * 
 * 
 * Note:
 * 
 * 
 * -100.0 < x < 100.0
 * n is a 32-bit signed integer, within the range [−2^31, 2^31 − 1]
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0){
            return 1;
        } else if(x == 0 || x == 1){
            return x;
        } else if(x == -1){
            return n % 2 ? -1 : 1;
        }
        int flag = 0;
        long long nn = n;
        if (nn < 0){
            nn = nn * (-1);
            flag = 1;
        }
        double temp = 1;
        while(nn != 0) {
            if (nn & 1) {
                temp *= x;
            }
            x *= x;
            nn = nn >> 1;
        }
        if(flag) {
            temp = 1 / temp;
        }
        return temp;
    }
};
// @lc code=end

