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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector< vector<int> > ans;
        if(root==NULL)
            return ans;
        level_order(root,0,ans);
        return ans;
    }
    
    
    void level_order(TreeNode* root, int level, vector< vector<int> > &ans ){
        vector<int> temp;
        if(ans.size()==level){
            ans.push_back(temp);
        }
        ans[level].push_back(root->val);
        if(root->left!=NULL)
            level_order(root->left,level+1,ans);
        if(root->right!=NULL)
            level_order(root->right,level+1,ans);
        
    }
};