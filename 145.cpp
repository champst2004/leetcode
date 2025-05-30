// https://leetcode.com/problems/binary-tree-postorder-traversal/description/

class Solution {
    public:
        vector<int> postorderTraversal(TreeNode* root) {
            vector<int> ans;
            postorder(root, ans);
            return ans;
        }
        void postorder(TreeNode* root, vector<int>& ans){
            if(root == nullptr) return;
            postorder(root->left, ans);
            postorder(root->right, ans);
            ans.push_back(root->val);
        }
};