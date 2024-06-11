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
node *sortedinsert(node *head,int y){
    node *temp=new node(y);
   node *curr=head;
   if(y<head->data){
       temp->next=head;
       return temp;
   }
   while(curr->next!=NULL&&curr->next->data<y)
   curr=curr->next;
       
           temp->next=curr->next;
           curr->next=temp;
            return head;
   
}
int main()
{
    node *head=new node (10);
    head->next=new node (14);
    head->next->next=new node(15);
    head->next->next->next=new node(55);
    head->next->next->next->next=new node(125);
    printlist(head);
 node*insert =  sortedinsert(head,17);
 printlist(insert);
    return 0;
}