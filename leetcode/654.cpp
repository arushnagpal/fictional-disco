/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


 // O(n) solution = Read this https://leetcode.com/problems/maximum-binary-tree/discuss/106147/c-8-lines-on-log-n-map-plus-stack-with-binary-search


class Solution {
public:
    
    int max(vector<int>& nums, int l, int r){
        int maxpos=l;
        for(int i=l;i<r;i++){
            if(nums[maxpos]<nums[i])
                maxpos=i;
        }
        // cout<<"maxpos is "<<maxpos<<endl;
        return maxpos;
    }
    
    TreeNode* helper(vector<int>& nums, int l, int r){
        // cout<<"l and r are "<<l<<" "<<r<<endl;
        if(l==r || l<0 || r>nums.size()){
            return NULL;
        }
        int maxpos = max(nums,l,r);
        TreeNode* root = new TreeNode(nums[maxpos]);
        root->left=helper(nums,l,maxpos);
        root->right=helper(nums,maxpos+1,r);
        return root;
    };
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums, 0, nums.size());
    }
};