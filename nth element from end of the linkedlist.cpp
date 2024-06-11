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
void nth_element_from_end(node *head,int n){
    int length=0;
    for(node *curr=head;curr!=NULL;curr=curr->next)
        length++;
        
        if(length < n){
         cout << "List is shorter than " << n << " elements." << endl;
        return;}
        
        node *curr=head;
    for(int i=1;i<length-n+1;i++)
        curr=curr->next;
    cout<<curr->data<<endl;
}
int main()
{
    node *head=new node (10);
    head->next=new node (19);
    head->next->next=new node(15);
    head->next->next->next=new node(55);
    head->next->next->next->next=new node(25);
    printlist(head);
    nth_element_from_end(head,4);
    


    return 0;
}



