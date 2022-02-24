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
node* move_to_front(node* &head){
    if(!head||!head->next){
        return head;
    }
    node* p=head;
    node* q=NULL;
    while(p->next!=NULL){
        q=p;
        p=p->next;
    }
    p->next=head;
    head=p;
    q->next=NULL;

return head;
}
void ReverseDisplay(node* head){
    if(head==NULL){
        return;
    }
    else{
        ReverseDisplay(head->next);
        cout<<head->data<<"->";
    }
}
void insertAtHead(node* &head,int val){
    node* n=new node(val);

    n->next=head;
    head=n;
}
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
int main()
{
    node* head=NULL;
    display(head);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);

    // node* newhead=move_to_front(head);
    // display(newhead);

    ReverseDisplay(head);
    cout<<"NULL"<<endl;
return 0;
}




