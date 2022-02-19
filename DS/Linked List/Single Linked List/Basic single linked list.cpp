/*
Author: Md. Rasel Meya
Dept. of CSTE,
Noakhali Science & Technology University.

*/
// part:2
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
    Node *head=NULL;
    Node *second=NULL;
    Node *third=NULL;

    // create Nodes
    head = new Node();
    second=new Node();
    third=new Node();
    
    // data and next pointer
    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;
    printList(head);









}
