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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return root;
        TreeNode* a = invertTree(root->right);
        TreeNode* b = invertTree(root->left);
        root->left=a;
        root->right=b;
        return root;
    }
    
    
    void invertHelper(TreeNode* left, TreeNode*right){
         if(right==NULL && left==NULL)
            return;
        if(left!=NULL && right==NULL){
            right=left;
            left=NULL;
        }
        if(right!=NULL && left ==NULL){
            left=right;
            right=NULL;
        }

        if(left!=NULL && right!=NULL){
            swapValue(left, right);
            invertHelper(left->left, right->right);
            invertHelper(left->right, right->left);
        }       
    }
    
    
    void swapValue(TreeNode* a, TreeNode* b){
        int temp=a->val;
        a->val=b->val;
        b->val=temp;
    }
};