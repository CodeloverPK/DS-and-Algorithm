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
bool check_identical(node* root1,node* root2){
    if(!root1 && !root2){
        return true;
    }
    else if(!root1 || !root2){
        return false;
    }
    else{
        bool cond1=(root1->data==root2->data);
        bool cond2=check_identical(root1->left,root2->left);
        bool cond3=check_identical(root1->right,root2->right);

        if(cond1 && cond2 && cond3){
            return true;
        }else{
            return false;
        }
    }
}
int main(){
    node* root1=NULL;
    int a1[]={3,2,5,1,4,9,7,6};
    int n1=sizeof(a1)/sizeof(a1[0]);
    for(int i=0;i<n1;i++){
        root1=Insert_BST(root1,a1[i]);
    }
    node* root2=NULL;
    int a2[]={3,2,5,1,4,7,6};
    int n2=sizeof(a2)/sizeof(a2[0]);
    for(int i=0;i<n2;i++){
        root2=Insert_BST(root2,a2[i]);
    }
    // inorder(root);
    cout<<"\n";
    if(check_identical(root1,root2)){
        cout<<"Identical"<<endl;
    }else{
        cout<<"Not Identical"<<endl;
    }

return 0;
}
