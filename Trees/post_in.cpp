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

void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int search(int in[],int st,int end,int curr){
    for(int i=st;i<=end;i++){
        if(in[i]==curr){
            return i;
        }
    }
    return -1;
}
node* buildtree(int post[],int in[],int start,int end){
    static int idx=4;
    if(start>end){
        return NULL;
    }
    int curr=post[idx];
    idx--;
    node* n=new node(curr);
    if(start==end){
        return n;
    }
    int pos=search(in,start,end,curr);
    n->right=buildtree(post,in,pos+1,end);
    n->left=buildtree(post,in,start,pos-1);
    return n;
}
int main(){
    int post[]={4,2,5,3,1};
    int in[]={4,2,1,5,3};
    node* root=buildtree(post,in,0,4);
    inorder(root);
    cout<<endl;
return 0;
}