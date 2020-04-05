/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 *
 * https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
 *
 * algorithms
 * Medium (43.94%)
 * Likes:    1703
 * Dislikes: 214
 * Total Accepted:    391.2K
 * Total Submissions: 883K
 * Testcase Example:  '[3,4,5,1,2]'
 *
 * Suppose an array sorted in ascending order is rotated at some pivot unknown
 * to you beforehand.
 * 
 * (i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).
 * 
 * Find the minimum element.
 * 
 * You may assume no duplicate exists in the array.
 * 
 * Example 1:
 * 
 * 
 * Input: [3,4,5,1,2] 
 * Output: 1
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [4,5,6,7,0,1,2]
 * Output: 0
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        return findMyMin(nums, 0, nums.size() - 1);        
    }

    int findMyMin(vector<int>& nums, int left, int right){
        if(left + 1 >= right){
            return min(nums[left], nums[right]);
        }
        if (nums[left] < nums[right]) {
            return nums[left];
        } else{
            int mid = left + (right - left) / 2;
            if ((nums[mid] > nums[left]) && (nums[mid] > nums[right])) {
                return findMyMin(nums, mid + 1, right);
            } else if ((nums[mid] < nums[left]) && (nums[mid] < nums[right])) {
                return findMyMin(nums, left, mid);
            }
        }
        return -1;
    }
};
// @lc code=end

