// https://leetcode.com/problems/balanced-binary-tree/description/

class Solution {
    public:
        bool isBalanced(TreeNode* root) {
            return height(root) != -1;
        }
        int height(TreeNode* root){
            if(root == NULL) return 0;
            int lHeight = height(root->left);
            int rHeight = height(root->right);
            if(lHeight == -1 || rHeight == -1) return -1;
            if(abs(lHeight - rHeight) > 1) return -1;
            return max(lHeight, rHeight) + 1;
        }
    };