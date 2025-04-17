// https://leetcode.com/problems/middle-of-the-linked-list/description/

class Solution {
    public:
        int len(ListNode* root){
            int n = 0;
            while(root){
                n++;
                root = root->next;
            }
            return n;
        }
        ListNode* middleNode(ListNode* head) {
            int size = len(head);
            int n;
            if(n%2==0) n = size/2;
            else n = size/2 + 1;
            for(int i = 0; i < n; i++){
                head = head->next;
            }
            return head;
        }
};