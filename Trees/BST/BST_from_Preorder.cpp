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
node* Make_BST(int pre[],int* preIdx,int key ,int min,int max,int n){
    
    if(*preIdx>=n){
        return NULL;
    }
    node* root=NULL;
    if(key>min && key<max){
        root=new node(key);
        *preIdx=*preIdx+1;

        if(*preIdx<n){
            root->left=Make_BST(pre,preIdx,pre[*preIdx],min,key,n);
        }
        if(*preIdx<n){
            root->right=Make_BST(pre,preIdx,pre[*preIdx],key,max,n);
        }
    }

    return root;
}
node* insertBST(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left=insertBST(root->left,val);
    }else{
        root->right=insertBST(root->right,val);
    }
return root;
}

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    // node* root=NULL;
    // int a[]={5,3,1,4,2,6,7};
    // int n=sizeof(a)/sizeof(a[0]);

    // for(int i=0;i<n;i++){
    //     root=insertBST(root,a[i]);
    // }
    // inorder(root);
    // cout<<"\n";

    int pre[]={7,5,4,6,8,9};
    int size=6;
    int preIdx=0;
    node* BSTroot=Make_BST(pre,&preIdx,pre[0],INT_MIN,INT_MAX,size);

    preorder(BSTroot);
    cout<<"\n";


return 0;
}
