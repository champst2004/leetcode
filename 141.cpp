// https://leetcode.com/problems/linked-list-cycle/

class Solution {
    public:
        bool hasCycle(ListNode *head) {
            if(!head) return false;
            for(int i = 0; i < 10001; i++){
                if(!head->next){
                    return false;
                }
                head = head->next;
            }
            return true;
        }
};  