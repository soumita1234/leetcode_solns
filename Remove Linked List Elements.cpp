/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy=head;
         while (head && head->val==val) head=head->next;
            while(dummy){
                if(dummy->next && dummy->next->val==val){
                    dummy->next=dummy->next->next;
                }
                else{
                    dummy=dummy->next;
                }
            }
        
        return head;
    }
};
