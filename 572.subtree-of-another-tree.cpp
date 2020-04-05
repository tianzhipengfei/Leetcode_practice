/*
 * @lc app=leetcode id=572 lang=cpp
 *
 * [572] Subtree of Another Tree
 *
 * https://leetcode.com/problems/subtree-of-another-tree/description/
 *
 * algorithms
 * Easy (43.31%)
 * Likes:    1919
 * Dislikes: 92
 * Total Accepted:    186.4K
 * Total Submissions: 425.7K
 * Testcase Example:  '[3,4,5,1,2]\n[4,1,2]'
 *
 * 
 * Given two non-empty binary trees s and t, check whether tree t has exactly
 * the same structure and node values with a subtree of s. A subtree of s is a
 * tree consists of a node in s and all of this node's descendants. The tree s
 * could also be considered as a subtree of itself.
 * 
 * 
 * Example 1:
 * 
 * Given tree s:
 * 
 * ⁠    3
 * ⁠   / \
 * ⁠  4   5
 * ⁠ / \
 * ⁠1   2
 * 
 * Given tree t:
 * 
 * ⁠  4 
 * ⁠ / \
 * ⁠1   2
 * 
 * Return true, because t has the same structure and node values with a subtree
 * of s.
 * 
 * 
 * Example 2:
 * 
 * Given tree s:
 * 
 * ⁠    3
 * ⁠   / \
 * ⁠  4   5
 * ⁠ / \
 * ⁠1   2
 * ⁠   /
 * ⁠  0
 * 
 * Given tree t:
 * 
 * ⁠  4
 * ⁠ / \
 * ⁠1   2
 * 
 * Return false.
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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        TreeNode* p = s;
        stack<TreeNode*> nodeStack;
        nodeStack.push(s);
        // Preorder walk through s. Faster than 16.92%, less than 100.00% 
        // while(!nodeStack.empty() || p){
        //     while(p){
        //         if(p->val == t->val){
        //             if(checkSameTree(p, t)) {
        //                 return true;
        //             }
        //         }
        //         nodeStack.push(p);
        //         p = p->left;
        //     }
        //     if(!nodeStack.empty()) {
        //         TreeNode* tmp = nodeStack.top();
        //         nodeStack.pop();
        //         p = tmp->right;
        //      }
        // }

        // Inorder walk through s. Faster than 45.56%, less than 100.00% 
        while(!nodeStack.empty() || p){
            while(p){
                nodeStack.push(p);
                p = p->left;
            }
            if(!nodeStack.empty()) {
                TreeNode* tmp = nodeStack.top();
                nodeStack.pop();
                if(tmp->val == t->val){
                    if(checkSameTree(tmp, t)) {
                        return true;
                    }
                }
                p = tmp->right;
             }
        }

        return false;
    }

    bool checkSameTree(TreeNode* s, TreeNode* t) {
        if(!s && !t) return true;
        if(!s || !t) return false;
        if(s->val != t->val) return false;
        return checkSameTree(s->left, t->left) && checkSameTree(s->right, t->right);
    }
};
// @lc code=end

