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
void insertAthead(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}
void insertAttail(node* &head,int val){
    if(head==NULL){
        insertAthead(head,val);
        return;
    }
    node* temp=head;
    node* n=new node(val);
    while (temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void deleteAthead(node* &head){

    node* temp=head;
    if(temp==NULL ){
        return;
    }
    if(temp==head){
        delete temp;
        head=NULL;
        return;
    }
    while (temp->next!=head){
        temp=temp->next;
    }

    node* todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;
}
void deletion(node* &head,int pos){
    if(pos==1){
        deleteAthead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void display(node* head){
    node* temp=head;
    if(temp==NULL){
        cout<<"list is empty"<<endl;
        return ;
    }
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    } while (temp!=head);
    cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;
    display(head);
    insertAttail(head,1);
    // insertAttail(head,2);
    // insertAttail(head,3);
    // insertAttail(head,4);
    // display(head);
    // insertAthead(head,5);
    // display(head);
    deletion(head,1);
    // display(head);
    // deleteAthead(head);
    display(head);

return 0;
}