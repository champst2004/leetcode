// https://leetcode.com/problems/minimum-distance-between-bst-nodes/description/

class Solution {
    public:
        int minDiffInBST(TreeNode* root) {
            vector<int> ans;
            int mini = INT_MAX;
            inorder(root, ans);
            sort(ans.begin(), ans.end());
            int n = ans.size();
            for(int i = 1; i < n; i++){
                mini = min(mini, ans[i]-ans[i - 1]);
            }
            return mini;
        }
        void inorder(TreeNode* root, vector<int>& ans){
            if(root == nullptr) return;
            inorder(root->left, ans);
            ans.push_back(root->val);
            inorder(root->right, ans);
        }
};