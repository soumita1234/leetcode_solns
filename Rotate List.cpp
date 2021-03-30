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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0)
            return head;
        int l=0;
        ListNode *t=head;
        while(t->next!=NULL)
        {
            l++;
            t=t->next;
        }        
        l++;
        t->next=head;
        int rp=l-(k%l);
        t=head;
        while(rp-->1){
            t=t->next;
        }
        head=t->next;
        t->next=NULL;
        return head;
    }
};
