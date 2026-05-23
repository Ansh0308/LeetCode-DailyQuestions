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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>> qu;
        qu.push({root,0});
        int ans=INT_MIN;
        while(!qu.empty()){
            int qSize=qu.size();
            ans=max(ans,qu.back().second-qu.front().second+1);
            for(int i=0;i<qSize;i++){
                TreeNode* temp=qu.front().first;
                long long idx=qu.front().second;
                qu.pop();
                if(temp->left)qu.push({temp->left,2*idx+1});
                if(temp->right)qu.push({temp->right,2*idx+2});
            }

        }
        return ans;
        
    }
};