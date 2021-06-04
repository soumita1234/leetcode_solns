class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL){
            return NULL;
        }
        
        ListNode *prev= NULL;
        ListNode *current= head;
        
        while(left>1){
            prev=current;
            current=current->next;
            left--;
            right--;
        }
        
        ListNode *connect=prev;
        ListNode *tail=current;
        
        while(right>0){
            ListNode *next= current->next;
            current->next=prev;
            prev=current;
            current=next;
            right--;
        }
        
        if(connect!=NULL){
            connect->next=prev;
        }
        else{
            head=prev;
        }
        tail->next=current;
        return head;
    }
};
