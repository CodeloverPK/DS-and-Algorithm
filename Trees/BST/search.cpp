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
bool search(node* root,int val){
    if(root==NULL){
        return false;
    }
    if(root->data==val){
        return true;
    }

    if(val<root->data){
        return search(root->left,val);
    } 

return search(root->right,val);
}

int main(){

    node* root=NULL;
    int a[]={5,3,1,4,2,6,7};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++){
        root=insertBST(root,a[i]);
    }

    if(search(root,6)){
        cout<<"YES Present"<<endl;
    }else{
        cout<<"NOT Present"<<endl;
    }

return 0;
}
