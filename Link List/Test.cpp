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

node* reverseK(node* &head,int k){
    if(head==NULL||head->next==NULL){
        return head;
    }
    int ct=0;
    node* prevptr=NULL;
    node *currptr=head;
    node* nextptr;
    while(currptr!=NULL&&ct<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        ct++;
    }    

    head->next=reverseK(nextptr,k);
return prevptr;
}
node* reverse(node* &head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node* prevptr=NULL;
    node *currptr=head;
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
    if(head==NULL||head->next==NULL){
        return head;
    }
    node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
return newhead;    
}


void makeCycle(node* &head,int pos){
    int ct=1;
    node* temp=head;
    node* start;
    while(temp->next!=NULL){
        if(ct==pos){
            start=temp;
        }
        temp=temp->next;
        ct++;
    }
    temp->next=start;
}
bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
void removeCycle(node* &head){
    node* fast=head;
    node* slow=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(fast!=slow);
    fast=head;
    while(fast->next!=slow->next){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
}
void deleteAthead(node* &head){
    if(head==NULL){
        return;
    }
    node *todelete=head;
    head=head->next;
    delete todelete;
}
void deletenode(node* &head,int value){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAthead(head);
    }
    node* temp=head;
    while(temp->next->data!=value){
        temp=temp->next;
    }
    node *todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void insertAtHead(node* &head,int val){
       node * n=new node(val);
       n->next=head;
       head=n; 
}
void InsertAtTail(node* &head,int val){
    node * n=new node(val);
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
void Display(node* head){
    while(head){
        cout<<head->data<<"->";
        head=head->next;
    }cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    InsertAtTail(head,7);
    InsertAtTail(head,8);
    InsertAtTail(head,9);
    InsertAtTail(head,10);
    Display(head);

    // insertAtHead(head,5);
    // Display(head);
    // deletenode(head,3);
    // Display(head);
    // deleteAthead(head);
    // Display(head);

    // cout<<detectCycle(head)<<endl;
    // makeCycle(head,4);
    // cout<<detectCycle(head)<<endl;
    // // Display(head);
    // removeCycle(head);
    // cout<<detectCycle(head)<<endl;
    // Display(head);

    // node* newhead=reverse(head);
    // node* newhead=reverseRecursive(head);
    node* newhead=reverseK(head,2);
    Display(newhead);
return 0;
}
