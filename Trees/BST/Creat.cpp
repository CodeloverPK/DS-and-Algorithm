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

node* Insert_BST(node* root,int key){
    if(!root){
        return new node(key);
    }
    if(key<root->data){
        root->left=Insert_BST(root->left,key);
    }
    else{
        root->right=Insert_BST(root->right,key);
    }
    return root;
}   
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    node* root=NULL;
    int a[]={3,4,5,6,9};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        root=Insert_BST(root,a[i]);
    }
    inorder(root);
    cout<<"\n";
return 0;
}
