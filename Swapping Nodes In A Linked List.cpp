class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
         ListNode *f=head;
        ListNode *t=head;
        for(int i=1;i<k;i++){
            f=f->next;
        }
        ListNode *val1=f;
        while(f->next!=NULL){
            f=f->next;
            t=t->next;
        }
        ListNode *val2=t;
        swap(val1->val,val2->val);
        return head;
    }
};
