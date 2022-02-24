#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int value){
        data= value;
        next=NULL;
    }
};


void insertAtTail(node* &head,int val){

    node* n =new node(val);

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


void display(node* head){
    node* t=head;
    if(t==NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    for(t=head;t!=NULL;t=t->next){
        cout<<t->data<<"->";
    }cout<<"NULL"<<endl;
}

void sort_list(node* &head){
    node* temp=head;
    while(temp){
        node* t=temp->next;
        while(t){
            if(temp->data>t->data){
                int x=temp->data;
                temp->data=t->data;
                t->data=x;
            }
            t=t->next;
        }
        temp=temp->next;
    }
}

int main()
{
    node* head=NULL;
    display(head);
    insertAtTail(head,12);
    insertAtTail(head,2);
    insertAtTail(head,30000);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,167);
    display(head);
    sort_list(head);
    display(head);
    return 0;
}