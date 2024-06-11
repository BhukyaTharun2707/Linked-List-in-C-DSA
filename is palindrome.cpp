#include<iostream>
#include<stack>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node (int x){
        data=x;
        next=NULL;
        
    }
};
bool ispalindrome(Node *head){
    stack<char>st;
    Node *curr=head;
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        st.push(curr->data);
    }
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        if(st.top()!=curr->data)
        return false;
        st.pop();
    }
    return true;
}
int main(){
    Node *head=new Node('b');
    head->next=new Node('a');
    head->next->next=new Node('a');
    head->next->next->next=new Node('a');
    cout<<(ispalindrome(head));
    return 0;
}