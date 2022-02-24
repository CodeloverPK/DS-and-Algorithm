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

int height(node* root){
    if(root==NULL){
        return 0;
    }
    return 1 + max(height(root->left),height(root->right));
}

//O(n^2)................................

int Diameter(node* root){
    if(root==NULL){
        return 0;
    }
    int leftheight=height(root->left);  // O(n)
    int rightheight=height(root->right);  // O(n)

    int currDiameter=1+leftheight+rightheight;

    int leftDiameter=Diameter(root->left);
    int rightDiameter=Diameter(root->right);

    return max(currDiameter,max(leftDiameter,rightDiameter));
    
}

//O(n)..................................

int calcDiameter(node* root,int *height){
    if(root==NULL){
        *height=0;
        return 0;
    }

    int lh=0,rh=0;
    int leftDiameter=calcDiameter(root->left,&lh);
    int rightDiameter=calcDiameter(root->right,&rh);

    int currDiameter=1+lh+rh;
    *height=max(lh,rh)+1;
    return max(currDiameter,max(leftDiameter,rightDiameter));

}

void display(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    display(root->right);
    display(root->left);
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    // cout<<Diameter(root)<<endl;
    int height=0;
    cout<<calcDiameter(root,&height)<<endl;
    display(root);
    cout<<endl;
return 0;
}

