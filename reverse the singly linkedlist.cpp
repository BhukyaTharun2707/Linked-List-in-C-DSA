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
node *reverse(node *head){
    node *curr=head;
    node *prev=NULL;
    while(curr!=NULL){
        node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
return prev;
}
int main()
{
    node *head=new node (10);
    head->next=new node (10);
    head->next->next=new node(15);
    head->next->next->next=new node(25);
    head->next->next->next->next=new node(25);
    printlist(head);
    node *head1=reverse(head);
    printlist(head1);


    return 0;
}