// https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/description/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = new ListNode(0, head);
        ListNode* prev = temp;
        ListNode* curr = head;
        while(curr != nullptr and curr->next != nullptr){
            if(curr->val == curr->next->val){
                while(curr->next != nullptr and curr->val == curr->next->val){
                    curr = curr->next;
                }
                prev->next = curr->next;
            }
            else prev = prev->next;
            curr = curr->next;
        }
        return temp->next;
    }
};