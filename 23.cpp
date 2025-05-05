// https://leetcode.com/problems/merge-k-sorted-lists/description/

class Solution {
    public:
        ListNode* mergeKLists(vector<ListNode*>& lists) {
            vector<int> vec;
            for (auto i : lists){
                ListNode* temp = i;
                while(temp != nullptr){
                    vec.push_back(temp->val);
                    temp = temp->next;
                }
            }
    
            sort(vec.begin(),vec.end());
            ListNode ans;
            ListNode* temp = &ans;
            for(auto i : vec){
                ListNode* curr = new ListNode;
                curr->val = i;
                temp->next = curr;
                temp = temp->next;
            }
            return ans.next;
        }
    };