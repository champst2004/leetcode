// https://leetcode.com/problems/remove-linked-list-elements/description/

class Solution {
    public:
        ListNode* removeElements(ListNode* head, int val) {
            ListNode x(0, head);
            ListNode* temp = &x;
            while(temp->next){
                if(temp->next->val == val) temp->next = temp->next->next;
                else temp = temp->next;
            }
            return x.next;
        }
};