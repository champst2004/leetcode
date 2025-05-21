// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

class Solution {
public:
    int count(ListNode* node){
        if(node == nullptr) return 0;
        int n;
        while(node != nullptr){
            n++;
            node = node->next;
        }
        return n;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int num = count(head);
        cout << num;
        int x = num - n;
        if(x == 0) return head->next;
        ListNode* temp = head;
        while(x > 1){
            temp = temp->next;
            x--;
        }
        temp->next = temp->next->next;
        return head;
    }
};