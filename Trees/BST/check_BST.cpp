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
bool check(node* root,node* min,node* max){
    if(!root){
        return true;
    }
    if(min && min->data>=root->data)
        return false;
    if(max && max->data<=root->data)
        return false;

    bool left = check(root->left,min,root);
    bool right=check(root->right,root,max);

    return (left && right);
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
    int a[]={5,3,1,0,4,8,9,2,6,7};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++){
        root=insertBST(root,a[i]);
    }
    inorder(root);
    cout<<endl;
    // cout<<(int)NULL<<endl; // 0
    if(check(root,NULL,NULL)){
        cout<<"Yes"<<"\n";
    }else{
        cout<<"No"<<"\n";
    }
return 0;
}
