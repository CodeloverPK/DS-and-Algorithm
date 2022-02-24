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
bool check(node* root1,node* root2){
    if(!root1 && !root2){
        return true;
    }
    else if(!root1 || !root2){
        return false;
    }
    else{
        bool a=(root1->data==root2->data);
        bool b=check(root1->left,root2->left);
        bool c=check(root1->right,root2->right);

        if(a&&b&&c){
            return true;
        }else{
            return false;
        }
    }
}

void preorder(node* root){
    if(root==NULL){
        return;
    }
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}
int main(){
    node *root1=new node(1);
    root1->right=new node(3);
    root1->right->left=new node(2);
    root1->right->right=new node(5);


    node *root2=new node(1);
    root2->right=new node(3);
    root2->right->left=new node(2);
    root2->right->right=new node(8);


    // preorder(root1);
    if(check(root1,root2)){
        cout<<"BST are identical"<<endl;
    }else{
        cout<<"BST is Not Identical"<<endl;
    }

return 0;
}
