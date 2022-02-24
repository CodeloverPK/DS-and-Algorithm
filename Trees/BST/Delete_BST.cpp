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
// Indorder successors  -> min  value in right subtrees 

node* inorderSucc(node* root){
    node* temp=root;
    while(temp && temp->left!=NULL){
        temp=temp->left;
    }
return temp;
}
// Indorder predecers -> max value in left subtrees 
node* inorderpredec(node* root){
    node* temp=root;
    while(temp && temp->right!=NULL){
        temp=temp->right;
    }
return temp;
}

node* deleteBST(node* root,int key){

    if(key<root->data){
        root->left=deleteBST(root->left,key);
    }
    else if(key>root->data){
        root->right=deleteBST(root->right,key);
    }else{
        if(root->left==NULL){
            node* temp=root->right;
            free(root);
            return temp;
        }
        if(root->right==NULL){
            node* temp=root->left;
            free(root);
            return temp;
        }
// through Indorder successors ....................
        node* temp=inorderSucc(root->right);
        root->data=temp->data;
        root->right=deleteBST(root->right,temp->data);

// through Indorder predecers  ....................
        // node* temp=inorderpredec(root->left);
        // root->data=temp->data;
        // root->left=deleteBST(root->left,temp->data);
    }
return root;
}

node* insertBST(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    else if(val<root->data){
        root->left= insertBST(root->left,val);
    }else{
        root->right= insertBST(root->right,val);
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
    int a[]={9,3,4,5,6,7,12,10};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++){
        root=insertBST(root,a[i]);
    }
    cout<<"\n";
    inorder(root);
    cout<<"\n";
    node* root2=deleteBST(root,9);
    inorder(root2);
    cout<<"\n";


return 0;
}
