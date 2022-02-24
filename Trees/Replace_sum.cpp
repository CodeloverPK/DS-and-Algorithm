// #include<bits/stdc++.h>
// using namespace std;


// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int sum(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     return root->data + sum(root->left)+sum(root->right);
// }

//O(n*n)......
// void replace(node* &root){
//     if(root==NULL){
//         return;
//     }
//     root->data=sum(root);
//     replace(root->left);
//     replace(root->right);
// }
// void display(node* root){
//     if(root==NULL){
//         return ;
//     }
//     cout<<root->data<<" ";
//     display(root->left);
//     display(root->right);
// }
// int main(){
//     node* root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     // cout<<sum(root)<<endl;

//     display(root);
//     cout<<endl;

//     replace(root);

//     display(root);
//     cout<<endl;    
// return 0;
// }





// 2ND By Teacher

#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
// O(n).......

void sumreplace(node* root){
    if(root==NULL){
        return;
    }
    sumreplace(root->left);
    sumreplace(root->right);

    if(root->left){
        root->data+=root->left->data;
    }
    if(root->right){
        root->data+=root->right->data;
    }
}
void display(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    display(root);
    cout<<"\n";
    sumreplace(root);
    display(root);
    cout<<"\n";
return 0;
}