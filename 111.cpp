// https://leetcode.com/problems/minimum-depth-of-binary-tree/

class Solution {
    public:
        int minDepth(TreeNode* root) {
            if(root == NULL) return 0;
            if(root->left == NULL) return minDepth(root->right) + 1;
            if(root->right == NULL) return minDepth(root->left) + 1;
            return min(minDepth(root->left), minDepth(root->right)) + 1;
        }
    };