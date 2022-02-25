class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        set<int>vec;
        while(head){
            
            vec.insert(head->val);
            head=head->next;
            
            
        }
        
        ListNode * unique=new ListNode();
            unique=NULL;
        ListNode * tem=new ListNode();
        for (auto &a:vec){
            ListNode * curr=new ListNode();
            curr->val=a;
            curr->next=NULL;
            if (unique==NULL){
                unique=curr;
            }
            else{
                tem=unique;
                while(tem->next!=NULL){
                    tem=tem->next;
                }
                tem->next=curr;
                
                
                
            }
            
        }
        
        return unique;
        
    }
};
