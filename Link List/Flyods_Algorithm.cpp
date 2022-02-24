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
void makecycle(node* &head,int pos){
    node* temp=head;
    node* startnode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}
bool Detectcycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL&& fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
void removecycle(node* &head){
    node* slow=head;
    node* fast=head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (fast!=slow);

    fast=head;
    while (fast->next!=slow->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL; 
}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;
    insertATtail(head,1);
    insertATtail(head,2);
    insertATtail(head,3);
    insertATtail(head,4);
    insertATtail(head,5);
    insertATtail(head,6);
    makecycle(head,3);
    // display(head);
    cout<<Detectcycle(head)<<endl;
    removecycle(head);
    cout<<Detectcycle(head)<<endl;
    display(head);   
return 0;
}