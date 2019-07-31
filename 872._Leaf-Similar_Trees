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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        stack<TreeNode*> nodeStack;
        TreeNode* tempNode = NULL;
        vector<int> leafSeq;
        nodeStack.push(root1);
        while(!nodeStack.empty()){
            tempNode = nodeStack.top();
            nodeStack.pop();
            if(tempNode->left== NULL && tempNode->right == NULL){
                leafSeq.push_back(tempNode->val);
            } else{
                if(tempNode->right){
                    nodeStack.push(tempNode->right);
                }
                if(tempNode->left){
                    nodeStack.push(tempNode->left);
                }
            }
        }
        int pos = 0;
        nodeStack.push(root2);
        while(!nodeStack.empty() && pos < leafSeq.size()){
            tempNode = nodeStack.top();
            nodeStack.pop();
            if(tempNode->left== NULL && tempNode->right == NULL){
                if(leafSeq[pos++] != tempNode->val){
                    return false;
                }
            } else{
                if(tempNode->right){
                    nodeStack.push(tempNode->right);
                }
                if(tempNode->left){
                    nodeStack.push(tempNode->left);
                }
            }
        }
        if(pos == leafSeq.size() && !nodeStack.empty()){
            return false;
        } else{
            return true;
        }
    }
};
