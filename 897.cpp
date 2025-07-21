// https://leetcode.com/problems/increasing-order-search-tree/

class Solution {
public:
    void storeValues(TreeNode* root, vector<int> &nums){
        if(root == nullptr) return;
        nums.push_back(root->val);
        storeValues(root->left, nums);
        storeValues(root->right, nums);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> values;
        storeValues(root, values);
        sort(values.begin(), values.end());
        TreeNode* ans = new TreeNode(0);
        TreeNode* curr = ans;
        for(int i : values){
            curr->right = new TreeNode(i);
            curr = curr->right;
        }
        return ans->right;
    }
};