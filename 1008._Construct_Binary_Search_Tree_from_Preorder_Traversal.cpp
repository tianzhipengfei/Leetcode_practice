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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if (preorder.size() == 0){
            return nullptr;
        }
        stack<TreeNode*> node_stack;
        TreeNode root = TreeNode(preorder[0]);
        TreeNode* cur_root = &root;
        node_stack.push(&root);
        for(int i = 1; i < preorder.size(); i++){
            TreeNode curNode = TreeNode(preorder[i]);
            while(!node_stack.empty()){  
                cout << "i: " << i << " top: " << node_stack.top()->val << endl;
                if(preorder[i] < node_stack.top()->val){
                    node_stack.top()->left = &curNode;
                    break;
                } 
                if(node_stack.top()->val < preorder[i]){
                    node_stack.pop();
                } else{
                    node_stack.top()->left->right = &curNode;
                }
            }
            if(node_stack.empty()){
                cur_root->right = &curNode;
                cur_root = &curNode;
            }
            node_stack.push(&curNode);
        }
        return &root;
    }
};