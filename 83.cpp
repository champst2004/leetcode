// https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head) {
            ListNode* ans = head;
            while (head && head->next){
                if (head->val == head->next->val) head->next = head->next->next;
                else head = head->next;
            }
            return ans;
        }
};