// https://leetcode.com/problems/merge-two-sorted-lists/description/

class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode* t1 = list1;
            ListNode* t2 = list2;
            ListNode* t3 = new ListNode(0);
            ListNode* temp = t3;
    
            while(t1 != nullptr && t2 != nullptr){
                if(t1->val <= t2->val){
                    temp->next = t1;
                    t1 = t1->next;
                    temp = temp->next;
                }
                else{
                    temp->next = t2;
                    t2 = t2->next;
                    temp = temp->next;
                }
            }
            if(t1 != nullptr) temp->next = t1;
            if(t2 != nullptr) temp->next = t2;
            return t3->next;
        }
};