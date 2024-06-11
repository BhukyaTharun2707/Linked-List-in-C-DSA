#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node (int x){
        data=x;
        next=NULL;
    }
};
void printlist(Node *head){
    Node *curr= head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;

    }cout<<endl;
}
Node *mergesortedlinkedlist(Node *a,Node *b){
    if(a==NULL)
    return b;
    if(b==NULL)
    return a;
    Node *tail=NULL;
    Node *head=NULL;
    if(a->data<=b->data){
        head=a;
        tail=a;
        a=a->next;
    }
    else{
        head=b;
        tail=b;
        b=b->next;
    }
    while(a!=NULL&&b!=NULL){
        if(a->data<=b->data){
        
        tail->next=a;
        tail=a;
        a=a->next;
    }
    else{
        tail->next=b;
        tail=b;
        b=b->next;
    }
    }
    if(a==NULL)
    tail->next=b;
    else
    tail->next=a;
    return head;
}
int main(){
    Node *a=new Node(1);
    a->next=new Node(20);
    a->next->next=new Node(36);
    a->next->next->next=new Node(50);
    Node *b=new Node (10);
    b->next=new Node(15);
    b->next->next=new Node(23);
    b->next->next->next=new Node(60);
   Node *mergehead= mergesortedlinkedlist(a,b);
    printlist(mergehead);
return 0;
}