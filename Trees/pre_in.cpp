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
node* buildtree(int pre[],int in[],int start,int end){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int curr=pre[idx];
    idx++;
    node* n=new node(curr);
    if(start==end){
        return n;
    }
    int pos=search(in,start,end,curr);
    n->left=buildtree(pre,in,start,pos-1);
    n->right=buildtree(pre,in,pos+1,end);
    return n;
}
int main(){
    int pre[]={1,2,4,3,5};
    int in[]={4,2,1,5,3};
    node* root=buildtree(pre,in,0,4);
    inorder(root);
    cout<<endl;
return 0;
}