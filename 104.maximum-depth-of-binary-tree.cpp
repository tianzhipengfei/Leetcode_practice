/*
 * @lc app=leetcode id=104 lang=cpp
 *
 * [104] Maximum Depth of Binary Tree
 *
 * https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
 *
 * algorithms
 * Easy (63.20%)
 * Likes:    2111
 * Dislikes: 66
 * Total Accepted:    731.2K
 * Total Submissions: 1.1M
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * Given a binary tree, find its maximum depth.
 * 
 * The maximum depth is the number of nodes along the longest path from the
 * root node down to the farthest leaf node.
 * 
 * Note: A leaf is a node with no children.
 * 
 * Example:
 * 
 * Given binary tree [3,9,20,null,null,15,7],
 * 
 * 
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 
 * return its depth = 3.
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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*, int>> myQueue;
        myQueue.push(make_pair(root, 1));
        int maxDepth = 1, tempDepth = 0;
        TreeNode* tempNode;
        while(!myQueue.empty()){
            tempNode = myQueue.front().first;
            tempDepth = myQueue.front().second;
            myQueue.pop();
            maxDepth = max(maxDepth, tempDepth);
            if(tempNode->left) myQueue.push(make_pair(tempNode->left, tempDepth + 1));
            if(tempNode->right) myQueue.push(make_pair(tempNode->right, tempDepth + 1));
        }
        return maxDepth;
    }
};
// @lc code=end

