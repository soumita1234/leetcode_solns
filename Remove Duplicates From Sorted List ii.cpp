class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy= new ListNode(0, head);
        ListNode* prev= dummy;
        while(head!=NULL){
        if(head->next!=NULL && head->val==head->next->val){
            //skip the nodes with same value with head
            while(head->next!=NULL && head->val==head->next->val){
                head=head->next;
            }
             prev->next=head->next;
        }
        else{
            prev=prev->next;
        }
        head=head->next;
    }
        return dummy->next;
        
    }
};
