/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
 *
 * https://leetcode.com/problems/binary-tree-level-order-traversal/description/
 *
 * algorithms
 * Medium (51.27%)
 * Likes:    2456
 * Dislikes: 64
 * Total Accepted:    541K
 * Total Submissions: 1M
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * Given a binary tree, return the level order traversal of its nodes' values.
 * (ie, from left to right, level by level).
 * 
 * 
 * For example:
 * Given binary tree [3,9,20,null,null,15,7],
 * 
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 
 * 
 * 
 * return its level order traversal as:
 * 
 * [
 * ⁠ [3],
 * ⁠ [9,20],
 * ⁠ [15,7]
 * ]
 * 
 * 
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) {
            return ans;
        }
        queue<TreeNode*> tempQueue;
        TreeNode* tempNode;
        tempQueue.push(root);
        while(!tempQueue.empty()) {
            int len = tempQueue.size();
            vector<int> curVector;
            for(int i = 0; i < len; i++){
                tempNode = tempQueue.front();
                tempQueue.pop();
                curVector.push_back(tempNode->val);
                if(tempNode->left) tempQueue.push(tempNode->left);
                if(tempNode->right) tempQueue.push(tempNode->right);
            }
            ans.push_back(curVector);
        }
        return ans;
    }
};
// @lc code=end

