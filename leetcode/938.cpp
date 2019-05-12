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
    int ans=0;
    
    void helper(TreeNode* root,int L, int R ){
        if(root==NULL)
            return;
        if(L<=root->val && root->val<=R)
            ans+=root->val;
        if(L<root->val)
            helper(root->left, L,R);
        if(R>root->val)
            helper(root->right, L,R);
        
    }
    
    int rangeSumBST(TreeNode* root, int L, int R) {
        ans=0;
        helper(root, L,R);
        return ans;
    }
};