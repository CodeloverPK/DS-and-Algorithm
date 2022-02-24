#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head,int val){

    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

node* reverseRecursive(node* &head){

    if(head==NULL || head->next==NULL){
        return head;
    }

    node* newnode= reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newnode;
}
void display(node* head){
    node* t=head;
    for(t=head;t!=NULL;t=t->next){
        cout<<t->data<<"->";
    }cout<<"NULL"<<endl;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);   

    // node* result=reverse(head);
    
    node* result=reverseRecursive(head);
    display(result);
return 0;
}