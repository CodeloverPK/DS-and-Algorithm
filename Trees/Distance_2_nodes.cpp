
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

node* LCA(node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }

    if(root->data==n1 || root->data==n2){
        return root;
    }
    node* left=LCA(root->left,n1,n2);
    node* right=LCA(root->right,n1,n2);
    
    if(left && right){
        return root;
    }
    if(left==NULL && right== NULL){
        return NULL;
    }
    if(left){
        return left;
    }
    return right;
}

int findistance(node*  root,int k,int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dist;
    }
    int left=findistance(root->left,k,dist+1);
    if(left!=-1){
        return left;
    }
//     int right = findistance(root->right,k,dist+1);
//     if(right!=-1){
//         return right;
//     }
// return -1;  

/*Above 4 Lines of code can be replaced by a single line of code*/

return  findistance(root->right,k,dist+1);
}

int distance(node* root,int n1,int n2){
    if(root==NULL){
        return -1;
    }
    node* lca=LCA(root,n1,n2);

    int d1=findistance(lca,n1,0);
    int d2=findistance(lca,n2,0);

    return (d1+d2);
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    cout<<distance(root,4,3)<<endl;
return 0;
}