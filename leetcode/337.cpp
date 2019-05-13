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
    int rob(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
         
        if (root->left == NULL && root->right == NULL) {
            return root->val;
        }
        int leftMax = 0;
        int rightMax = 0;
         
        if (root->left != NULL) {
            leftMax = rob(root->left->left) + rob(root->left->right);
        }
         
        if (root->right != NULL) {
            rightMax = rob(root->right->left) + rob(root->right->right);
        }
         
        int maxRoot = root->val + leftMax + rightMax;
         
        leftMax = rob(root->left);
        rightMax = rob(root->right);
         
        int maxNoRoot = leftMax + rightMax;
         
        return max(maxRoot, maxNoRoot);
    }
};