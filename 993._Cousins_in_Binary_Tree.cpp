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
    bool isCousins(TreeNode* root, int x, int y) {
        if(x == root->val || y == root->val) return false;
        queue<TreeNode*> treeNodeStack;
        queue<int> valStack;
        treeNodeStack.push(root);
        valStack.push(root->val);
        bool flag = true;
        while(flag && !treeNodeStack.empty()){
            queue<int> tempStack;
            for(int i = 0; i < valStack.size(); i++){
                TreeNode* temp = treeNodeStack.front();
                treeNodeStack.pop();
                if(temp->left != NULL){
                    treeNodeStack.push(temp->left);
                    if(temp->left->val == x){
                        if(temp->right && temp->right->val == y) return false;
                        else flag = false;
                    }
                    tempStack.push(temp->left->val);
                }
                if(temp->right != NULL){
                    treeNodeStack.push(temp->right);
                    if(temp->right->val == x){
                        if(temp->left && temp->left->val == y) return false;
                        else flag = false;
                    }
                    tempStack.push(temp->right->val);
                }
            }
            valStack = tempStack;
        }
        if(flag){
           return false; 
        } else{
            while(!valStack.empty()){
                if(valStack.front() == y) return true;
                valStack.pop();
            }
            return false;
        }
    }
};
