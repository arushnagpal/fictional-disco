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
    bool isSymmetric(TreeNode* root) {
        return helper(root,root);
    }
    
    
    bool helper(TreeNode* tree1, TreeNode* tree2){
        if(tree1==NULL && tree1==NULL)
            return true;
        if((tree1!=NULL && tree2==NULL) || (tree1==NULL && tree2!=NULL))
            return false;
        if(!helper(tree1->left, tree2->right))
            return false;
        if(!helper(tree1->right,tree2->left))
            return false;
        if(tree1->val!=tree2->val)
            return false;
        return true;
    }
};