/*
Author: Md. Rasel Meya
Dept. of CSTE,
Noakhali Science & Technology University.

*/
// part:3
// sigle linked list 

#include<bits/stdc++.h>
using namespace std;


// create a node 
class Node{

    public:
        int data;
        Node *next;

};
void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
 

int main(){
    cout<<"Enter Node Number:";
    int n;
    cin>>n;
    Node *head=NULL,*temp;
    while(n--){
        Node *current=new Node();
        cout<<"Enter Data:";
        cin>>current->data;
        current->next=NULL;
        if (head==NULL) {
            head=current;
        }
        else{
            temp=head;
            while (temp->next!=NULL) {
                temp=temp->next;
            }
            temp->next=current;
        }

    }
    printList(head);


}
