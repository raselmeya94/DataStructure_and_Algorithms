class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head or !head->next){
            return head;
        }
        
        ListNode *ptr=head;
        ListNode *rev=head;
        head=head->next;
        rev->next=NULL;
        
        while(head){
            ptr=head;
            head=head->next;
            ptr->next=rev;
            rev=ptr;
            cout<<rev->next<<" ";
        }
        
        return ptr;
    }
};
