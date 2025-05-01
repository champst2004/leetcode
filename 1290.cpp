// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/

class Solution {
    public:
        int height(ListNode* head){
            int count = 0;
            if(head == nullptr) return 0;
            while(head){
                count++;
                head = head->next;
            }
            return count;
        }
        int getDecimalValue(ListNode* head) {
            int num = 0;
            int n = height(head);
            int i = 0;
            ListNode* temp = head;
            while(temp != nullptr){
                num += temp->val*pow(2, n-i-1);
                i++;
                temp = temp->next;
            }
            return num;
        }
};