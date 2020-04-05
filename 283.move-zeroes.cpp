/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 *
 * https://leetcode.com/problems/move-zeroes/description/
 *
 * algorithms
 * Easy (55.79%)
 * Likes:    3117
 * Dislikes: 107
 * Total Accepted:    645.6K
 * Total Submissions: 1.1M
 * Testcase Example:  '[0,1,0,3,12]'
 *
 * Given an array nums, write a function to move all 0's to the end of it while
 * maintaining the relative order of the non-zero elements.
 * 
 * Example:
 * 
 * 
 * Input: [0,1,0,3,12]
 * Output: [1,3,12,0,0]
 * 
 * Note:
 * 
 * 
 * You must do this in-place without making a copy of the array.
 * Minimize the total number of operations.
 * 
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_num = 0;
        vector<int> temp;
        for(auto num: nums){
            if (num){
                temp.push_back(num);
            } else{
                zero_num ++;
            }
        }
        while(zero_num--){
            temp.push_back(0);
        }
        nums = temp;
    }
};
// @lc code=end

