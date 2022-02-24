#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st,int ele){

    if(st.empty()){
        st.push(ele);
        return;
    }
    int topele=st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(topele);
}
void reverse(stack<int> &st){
    
    if(st.empty()){
        return;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,ele);
}
void reversebyStack(stack<int> &st){
    stack<int> st2;
    if(st.empty()){
        return;
    }
    while(!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }

    while(!st2.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
    }cout<<endl;
}
void display(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    display(st);
    // reverse(st);
    // display(st);
    reversebyStack(st);
return 0;
}
