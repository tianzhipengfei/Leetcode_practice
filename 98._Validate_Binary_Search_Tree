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
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> node_stack;
        TreeNode *cur = root, *parent = NULL;
        while(cur || !node_stack.empty()){
            while(cur){
                node_stack.push(cur);
                cur = cur->left;
            }
            cur = node_stack.top();
            node_stack.pop();
            if(parent && cur->val <= parent->val){
                return false;
            }
            parent = cur;
            cur = cur->right;
        }
        return true;
    }
};
