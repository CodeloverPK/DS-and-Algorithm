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
bool check_order(node* &head){
    return((head==NULL)||(head->next==NULL)||(head->data<=head->next->data)&&check_order(head->next));
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
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);   
    cout<<check_order(head)<<endl;
return 0;
}