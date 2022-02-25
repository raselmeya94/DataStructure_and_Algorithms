class Solution {
public:
    bool hasCycle(ListNode *head) {
        while(head!=NULL){
            if (head->val==-10000000){
                return true;
            }
            head->val=-10000000;
            head=head->next;
        }
        return false;
    }
};
