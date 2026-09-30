/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=-1;
    int maxDep=-1;
    void helper(TreeNode* root,int curr){
        if(root==nullptr){
            return;
        }
        if(curr>maxDep){
            ans=root->val;
            maxDep=curr;
        }
        helper(root->left,curr+1);
        helper(root->right,curr+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        helper(root,0);
        return ans;
    }
};