#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void printlist(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}
void middleoflinkedlist(node *head){
    if (head==NULL)
    return;
       node *slow=head;
       node *fast=head;
       while(fast!=NULL && fast->next!=NULL){
           slow=slow->next;
           fast=fast->next->next;
       }
       cout<<slow->data<<" ";
}
int main()
{
    node *head=new node (10);
    head->next=new node (19);
    head->next->next=new node(15);
    head->next->next->next=new node(55);
    head->next->next->next->next=new node(25);
    printlist(head);
    middleoflinkedlist(head);
    return 0;
}