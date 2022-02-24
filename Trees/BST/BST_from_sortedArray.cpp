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
node* BST_from_sortedArray(int a[],int st,int end){
    node* root=NULL;

    if(st>end){
        return NULL;
    }
    int mid=(st+end)/2;
    root=new node(a[mid]);
    root->left=BST_from_sortedArray(a,st,mid-1);
    root->right=BST_from_sortedArray(a,mid+1,end);
    return root;
}
void preorder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    int a[]={10,20,30,40,50};
    node* root=BST_from_sortedArray(a,0,4);
    preorder(root);
    cout<<"\n";
return 0;
}