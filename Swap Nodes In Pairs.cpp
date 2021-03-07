class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* swp=head;
        while(swp!=NULL && swp->next!=NULL){
            swap(swp->val,swp->next->val);
            swp=swp->next->next;
        }
        return dummy->next;
    }
};
