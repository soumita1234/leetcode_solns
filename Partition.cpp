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
    ListNode* partition(ListNode* head, int x) {
         ListNode *bhead= new ListNode(0);
         ListNode *b= bhead;
         ListNode *ahead= new ListNode(0);
         ListNode *a= ahead;
        
        while (head != NULL){
            if(head->val<x){
                b->next=head;
                b=b->next;
            }
            else{
                a->next=head;
                a=a->next;
            }
            head=head->next;
        }
        a->next=NULL;
        b->next=ahead->next;
        return bhead->next;
    }
};
