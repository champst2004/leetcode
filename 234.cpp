// https://leetcode.com/problems/palindrome-linked-list/description/

class Solution {
    public:
        bool isPalindrome(ListNode* head) {
            stack<int> st;
            string str1 = "", str2 = "";
            while(head){
                str1 += head->val + '0';
                st.push(head->val);
                head = head->next;
            }
            while(!st.empty()){
                str2 += st.top() + '0';
                st.pop();
            }
            return str1 == str2;
        }
};