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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr)return {};
        queue<TreeNode*> qu;
        qu.push(root);
        vector<vector<int>> ans;
        while(!qu.empty()){
            int n=qu.size();
            vector<int> temp;
            while(n--){
                TreeNode* curr=qu.front();
                qu.pop();
                temp.push_back(curr->val);
                if(curr->left!=nullptr)qu.push(curr->left);
                if(curr->right!=nullptr)qu.push(curr->right);


            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};