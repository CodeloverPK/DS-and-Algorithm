#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next=NULL;
    }   
};

class Stack{
    node* top=NULL;
    public:
    void push(int x){
        node* n= new node(x);

        if(top==NULL){
            top=n;
            return;
        }
        n->next=top;
        top=n;
    }
    void pop(){
        if(top==NULL){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        node* temp=top;
        top=top->next;
        delete temp;
    }
    int peek(){
        if(top==NULL){
            return -1;
        }
        return top->data;
    }
};
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.peek()<<endl;

    return 0;
}