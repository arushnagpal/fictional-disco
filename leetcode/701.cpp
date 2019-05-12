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
    
    TreeNode* helperutil(TreeNode* root, int val){
        if(root==NULL){
            return root;
        }
        if(root->left!=NULL && val<=root->val){
            helperutil(root->left, val);
        }
        if(root->right!=NULL && val>root->val){
            helperutil(root->right, val);
        }
        if(root->right==NULL && val>root->val){
            root->right = new TreeNode(val);
        }
        if(root->left==NULL && val<=root->val){
            root->left = new TreeNode(val);
        }
        return root;
    }
    
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        return helperutil(root, val);
    }
};