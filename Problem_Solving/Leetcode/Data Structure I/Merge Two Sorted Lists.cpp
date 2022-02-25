class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1==NULL)
            return list2;
        else if (list2==NULL)
            return list1;
        cout<<list1->val;
        ListNode* ptr = new ListNode();
        ListNode *head=ptr;
       while( list1 and list2){ 
        if (list1->val <=list2->val){
              ListNode* temp = new ListNode(list1->val);
                ptr->next = temp;
                temp->next = list2;
                ptr = temp;
                list1 = list1->next;
        }
        else{
             ListNode* temp = new ListNode(list2->val);
                ptr->next = temp;
                temp->next = list2;
                ptr = temp;
                list2 = list2->next;
        }
       } 
      // append the remaining of list1 or list2
        if(list1 == NULL){
                ptr->next = list2;
            }
        else if(list2 == NULL){
                   ptr->next = list1;
        }
    return head->next;
    }
};
