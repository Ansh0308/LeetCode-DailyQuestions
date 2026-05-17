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

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int & preI,int left,int right){
        if(left>right)return nullptr;
        TreeNode* root= new TreeNode(preorder[preI]);
        int find=preorder[preI];
        preI++;
        int index=-1;
        for(int i=left;i<=right;i++){
            if(inorder[i]==find){index=i;
            break;
            }
        }
        root->left=helper(preorder,inorder,preI,left,index-1);
        root->right=helper(preorder,inorder,preI,index+1,right);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preI=0;
        return helper(preorder,inorder,preI,0,preorder.size()-1);
        
    }
};