// https://leetcode.com/problems/sum-of-left-leaves/description/

class Solution {
    public:
        int sumOfLeftLeaves(TreeNode* root) {
            stack<pair<TreeNode*, bool>> st;
            int sum = 0;
            st.push({root, false});
    
            while(!st.empty()){
                auto [temp, left] = st.top();
                st.pop();
                if(left && !temp->left && !temp->right) sum += temp->val;
                if(temp->left != nullptr) st.push({temp->left, true});
                if(temp->right != nullptr) st.push({temp->right, false});
            }
            return sum;
        }
};