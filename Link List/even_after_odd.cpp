
/*
yaha pr odd postion element ke baad even position element ki baat ki gayi hai........
*/

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
void EvenafterOdd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenstart=even;
    while(odd->next!=NULL&&even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    if(odd->next==NULL){
        even->next=NULL;
    }
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
    insertAtTail(head,5);
    // insertAtTail(head,6);
    display(head);
    EvenafterOdd(head);
    display(head);
    return 0;
}



/*
yaha pr odd  element ke baad even element ki baat ki gayi hai........
*/

// #include<bits/stdc++.h>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;
//     node(int value){
//         data= value;
//         next=NULL;
//     }
// };

// void insertAtHead(node* &head,int val){
//     node* n=new node(val);
//     n->next=head;
//     head=n;
// }
// void insertAtTail(node* &head,int val){

//     node* n =new node(val);

//         if(head==NULL){
//             head=n;
//             return;
//         }

//     node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }
// void display(node* head){
//     node* t=head;
//     if(t==NULL){
//         cout<<"List is Empty"<<endl;
//         return;
//     }
//     for(t=head;t!=NULL;t=t->next){
//         cout<<t->data<<"->";
//     }cout<<"NULL"<<endl;
// }

// node*  EvenafterOdd(node* &head){
//     node* even=NULL;
//     node* odd=NULL;
//     node* temp=head;

//     while(temp!=NULL){
//         if((temp->data)%2==0){
//             insertAtTail(even,temp->data);
//         }
//         else{
//             insertAtTail(odd,temp->data);
//         }
//     temp=temp->next;
//     }
//     node *t=odd;
//     while(t->next!=NULL){
//         t=t->next;
//     }
//     t->next=even;

// return odd; 
// }

// int main()
// {
//     node* head=NULL;
//     display(head);
//     insertAtTail(head,12);
//     insertAtTail(head,2);
//     insertAtTail(head,3);
//     insertAtTail(head,4);
//     insertAtTail(head,5);
//     insertAtTail(head,167);
//     display(head);
//     node* newhead=EvenafterOdd(head);
//     display(newhead);
//     return 0;
// }