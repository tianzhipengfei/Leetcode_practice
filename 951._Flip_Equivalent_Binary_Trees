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
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL && root2 == NULL){
            return true;
        } else if((root1 != NULL && root2 == NULL) || (root1 == NULL && root2 != NULL)) {
            return false;
        }
        else if(root1->left && root1->right && root2->left && root2->right){
           if(root1->left->val == root2->left->val){
                return flipEquiv(root1->left, root2->left) && flipEquiv(root1->right, root2->right);
           } else{
                return flipEquiv(root1->left, root2->right) && flipEquiv(root1->right, root2->left);
           }
        } else if(root1->left && !root1->right && root2->left && !root2->right){
            return flipEquiv(root1->left, root2->left);
        } else if(root1->left && !root1->right && !root2->left && root2->right){
            return flipEquiv(root1->left, root2->right);
        } else if(!root1->left && root1->right && root2->left && !root2->right){
            return flipEquiv(root1->right, root2->left);
        } else if(!root1->left && root1->right && !root2->left && root2->right){
            return flipEquiv(root1->right, root2->right);
        } else if(!root1->left && !root1->right && !root2->left && !root2->right){
            return root1->val == root2->val;
        } else{
            return false;
        }
    }
};
