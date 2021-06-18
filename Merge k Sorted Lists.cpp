class Solution {
public:
    ListNode* mergeTwoLists(ListNode *l1, ListNode *l2){
        ListNode *temp = new ListNode;
        ListNode *ans = temp;
        while(l1 && l2){
            if(l1->val > l2->val){
                temp->next = l2;
                l2 = l2->next;
            }
            else{
                temp->next = l1;
                l1 = l1->next;
            }
            temp = temp->next;
        }
        
        temp->next = (l1==nullptr) ? l2:l1;
        
        return ans->next;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0)return {};
        ListNode *ans = lists[0];
        for(int i=1; i<lists.size(); i++){
            ans = mergeTwoLists(ans, lists[i]);
        } 
        return ans;
    }
};
