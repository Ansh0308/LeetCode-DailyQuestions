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
    TreeNode* prev=nullptr;
    int ans=INT_MAX;
    void helper(TreeNode* root){
        if(root==nullptr)return;
        helper(root->left);
        if(prev!=nullptr){
            ans=min(ans,abs(prev->val-root->val));
        }
        prev=root;
        helper(root->right);

    }
    int minDiffInBST(TreeNode* root) {
        helper(root);
        return ans;
        
    }
};