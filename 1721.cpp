// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int n = 0;
        int temp1, temp2;
        ListNode* temp = head;
        while(temp != nullptr){
            n++;
            temp = temp->next;
        }
        int i = 1;
        ListNode* curr = head;
        while(i != k){
            curr = curr->next;
            i++;
        }
        temp1 = curr->val;
        ListNode* curr2 = head;
        i = 0;
        while(n - i != k){
            curr2 = curr2->next;
            i++;
        }
        temp2 = curr2->val;
        curr2->val = temp1;
        curr->val = temp2;
        return head;
    }
};