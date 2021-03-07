class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy= new ListNode(0);
        dummy->next=head;
        int length=0;
        ListNode* l=head;
        while(l!=NULL){
            length++;
            l=l->next;
        }
        length=length-n;
        l=dummy;
        while(length>0){
            length--;
            l=l->next;
        }
        l->next=l->next->next;
        return dummy->next;
    }
};
