// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        if(head == nullptr || head->next == nullptr){
            return nullptr;
        }
        while(fast != nullptr and fast->next != nullptr){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = prev->next->next;
        return head;
    }
};