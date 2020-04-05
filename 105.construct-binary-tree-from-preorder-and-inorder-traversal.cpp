/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
 *
 * https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/
 *
 * algorithms
 * Medium (44.63%)
 * Likes:    2754
 * Dislikes: 79
 * Total Accepted:    316.1K
 * Total Submissions: 682.5K
 * Testcase Example:  '[3,9,20,15,7]\n[9,3,15,20,7]'
 *
 * Given preorder and inorder traversal of a tree, construct the binary tree.
 * 
 * Note:
 * You may assume that duplicates do not exist in the tree.
 * 
 * For example, given
 * 
 * 
 * preorder = [3,9,20,15,7]
 * inorder = [9,3,15,20,7]
 * 
 * Return the following binary tree:
 * 
 * 
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.size() == 0) {
            return NULL;
        }

        TreeNode* root = new TreeNode(preorder[0]);
        int c = 0;
        for (; c < inorder.size(); c++){
            if(inorder[c] == preorder[0]){
                break;
            }
        }
        vector<int> left_preorder, right_preorder, left_inorder, right_inorder;
        for (int i = 0; i < c; i ++){
            left_inorder.push_back(inorder[i]);
        }
        for (int i = c + 1; i < inorder.size(); i ++){
            right_inorder.push_back(inorder[i]);
        }
        for (int j = 0; j < left_inorder.size(); j++){
            left_preorder.push_back(preorder[1 + j]);
        }
        for (int j = 0; j < right_inorder.size(); j++){
            right_preorder.push_back(preorder[left_inorder.size() + 1 + j]);
        }
        root->left = buildTree(left_preorder, left_inorder);
        root->right = buildTree(right_preorder, right_inorder);
        return root;
    }
};
// @lc code=end

