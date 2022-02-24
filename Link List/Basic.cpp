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
bool search(node* &head,int val){
    node* temp=head;
    while(temp){
        if(temp->data==val){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deleteAtHead(node* &head){
    node* to_delete=head;
    head=head->next;
    delete to_delete;
}
void deleteAtEND(node* &head){
    node* t=head;
    while(t->next->next!=NULL){
        t=t->next;
    }
    node* to_delete=t->next;
    t->next=NULL;
    delete to_delete;
}
void deletion(node* head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    node* t = head;
    while(t->next->data!=val){
        t=t->next;
    }
    node* to_delete=t->next;
    t->next=t->next->next;
    delete to_delete;
}
void INSERTAtgiveanpos(node* &head,int val,int pos){
    node* n=new node(val);
    if(pos<=1){
    n->next=head;
    head=n;
    return;
    }
    node * temp=head;
    while(--pos&&temp!=NULL){
        temp=temp->next;
    }
    if(temp==NULL){
        return;
    }
    else{
        n->next=temp->next;
        temp->next=n;
    }

}
void DELETIONAtgivenpos(node* &head,int pos){

    if(pos<=1){
        node* todelete =head;
        head=head->next;
        delete todelete;
        return;
    }
    node* temp=head;
    while(--pos&&temp!=NULL){
        temp=temp->next;
    }
    if(temp==NULL){
        return;
    }
    else{
        node* todelete= temp->next;
        temp->next=temp->next->next;
        delete todelete;
    }
}

void erasell(node* &head){
    node *temp=head;
    node*it;
    while(temp){
        it=temp->next;
        delete temp;
        temp=it;
    }
    head=NULL;
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
    // while(t!=NULL){
    //     cout<<t->data<<"->";
    //     t=t->next;
    // }cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;
    display(head);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,4);
    display(head);
    cout<<search(head,3)<<endl;
    cout<<search(head,1)<<endl;
    cout<<search(head,4)<<endl;
    INSERTAtgiveanpos(head,100,3);///wow
    display(head);
    // deleteAtHead(head);
    // display(head);
    // deleteAtEND(head);
    // display(head);
    // deletion(head,2);
    // display(head);
    DELETIONAtgivenpos(head,2); // wow wow
    display(head);


    erasell(head);
    display(head);
return 0;
}






// void DELETIONAtgivenpos(node* &head,int pos){

//     int k=1;
//     node* temp=head;
//     node* p;
//     if(temp==NULL){
//         return ;
//     }
//     if(pos==1){
//         head=head->next;
//         delete temp;
//         return;
//     }
//     else{
//         while(temp!=NULL&&k<pos){
//             k++;
//             p=temp;
//             temp=temp->next;
//         }
//     }
//         if(temp==NULL){
//             cout<<"Position does'nt Exist"<<endl;
//             return;
//         }
//         else{
//                 p->next=temp->next;
//                 delete temp;
//         }
// }
