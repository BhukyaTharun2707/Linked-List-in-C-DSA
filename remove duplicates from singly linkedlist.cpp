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
    node *curr = head;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
node *removeduplicates(node *head){
    node *curr=head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->data==curr->next->data){
            node *temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
        else
        curr=curr->next;
    }
    return head;
}
int main()
{
    node *head=new node (10);
    head->next=new node (10);
    head->next->next=new node(15);
    head->next->next->next=new node(25);
    head->next->next->next->next=new node(25);
    printlist(head);
    removeduplicates(head);
    printlist(head);

    return 0;
}