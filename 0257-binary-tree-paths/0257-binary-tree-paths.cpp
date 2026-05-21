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
void helper(TreeNode* root,vector<string> &ans,string curr){
    if(root==nullptr)return ;
    curr+=to_string(root->val);
    curr+="->";
    if(root->left==nullptr && root->right==nullptr){
        ans.push_back(curr.substr(0,curr.size()-2));
        return;
    
    }
    helper(root->left,ans,curr);
    helper(root->right,ans,curr);


}
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root,ans,"");
        return ans;
        
    }
};