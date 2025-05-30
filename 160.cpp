// https://leetcode.com/problems/intersection-of-two-linked-lists/description/

class Solution {
    public:
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            if(headA == nullptr|| headB == nullptr) return nullptr;
            ListNode* l1 = headA;
            ListNode* l2 = headB;
            while(l1 != l2){
                if(l1 == nullptr) l1 = headB;
                else l1 = l1->next;
                if(l2 == nullptr) l2 = headA;
                else l2 = l2->next;
            }
            return l1;
        }
};