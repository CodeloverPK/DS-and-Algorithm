#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data= val;
        next=NULL;
    }
};

void insertATtail(node* &head,int val){

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
node* reverselist(node* &head){
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
node* reverseK(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL&&count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reverseK(nextptr,k);
    }
    return prevptr;
}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    // cout<<"Hello World!"<<endl;
    node* head=NULL;
    insertATtail(head,1);
    insertATtail(head,2);
    insertATtail(head,3);
    insertATtail(head,4);
    insertATtail(head,5);
    insertATtail(head,6);
    display(head);
    // node* newhead=reverselist(head);
    // display(newhead);

    node* newKhead=reverseK(head,2);
    display(newKhead);
    return 0;
}