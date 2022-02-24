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
void insertAtHead(node* &head,int val){
    node* n=new node(val);
    head=n;
    return;
}
void insertAtTail(node* &head,int val){

    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;

    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }cout<<"NULL"<<endl;
    
}
int length(node* head){
    int l=0;
 while(head!=NULL){
    head=head->next;
    l++;
 }
 return l;
}
node* kappend(node* &head,int k){
    node* newHead;
    node* newTail;
    node* tail=head;
    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newTail=tail;
        }
        if(count==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;

    return newHead;
}
int main()
{ 
    node* head=NULL;
    int a[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(head,a[i]);
    }
    display(head);
    node* newhead=kappend(head,4);
    display(newhead);
return 0;
}



