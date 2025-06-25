// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/

class Solution {
public:
    TreeNode* createTree(vector<int>& nums, int start, int end){
        if(start > end) return nullptr;
        int mid = start + (end-start)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = createTree(nums, start, mid - 1);
        root->right = createTree(nums, mid + 1, end); 
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int start = 0;
        int end = nums.size() -1;
        return createTree(nums, start, end);
    }
};