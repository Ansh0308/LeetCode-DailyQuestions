class Solution {
public:
    bool helper(TreeNode* root, long long maxV, long long minV) {
        if (root == nullptr) return true;

        if (root->val <= minV || root->val >= maxV)
            return false;

        return helper(root->left, root->val, minV) &&
               helper(root->right, maxV, root->val);
    }

    bool isValidBST(TreeNode* root) {
        return helper(root, LLONG_MAX, LLONG_MIN);
    }
};