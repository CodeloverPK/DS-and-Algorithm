// #include<bits/stdc++.h>
// using namespace std;


// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// bool getpath(node* root,int key,vector<int> &path){
//     if(root==NULL){
//         return false;
//     }
//     path.push_back(root->data);
//     if(root->data==key){
//         return true;
//     }

//     if(getpath(root->left,key,path)||(getpath(root->right,key,path))){
//         return true;
//     }
//     path.pop_back();
//     return false;
// }

// int LCA(node* root,int n1,int n2){

//     vector<int>path1,path2;

//     if((!getpath(root,n1,path1))|| (!getpath(root,n2,path2))){
//         return -1;
//     }

//     // // Path1.........
//     // for(int i=0;i<path1.size();i++){
//     //     cout<<path1[i]<<" ";
//     // }cout<<endl;

//     // //Path2............
//     // for(int i=0;i<path2.size();i++){
//     //     cout<<path2[i]<<" ";
//     // }cout<<endl;

//     int pc;
//     for(pc=0;pc < path1.size() && path2.size() ;pc++){
//         if(path1[pc]!=path2[pc]){
//             break;
//         }
//     }
//     return path1[pc-1];
// }

// int main(){
//     node* root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->right->left=new node(5);
//     root->right->right=new node(6);
//     root->right->left->left=new node(7);

//     int n1=7;
//     int n2=6;
//     // cout<<LCA(root,n1,n2)<<endl;
//     int lca=LCA(root,n1,n2);
//     if(lca==-1){
//         cout<<"LCA doesn't exist"<<endl;
//     }
//     else{
//         cout<<"LCA : "<<lca<<endl;
//     }
// return 0;
// }









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

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->right->left=new node(5);
    root->right->right=new node(6);
    root->right->left->left=new node(7);

    int n1=7;
    int n2=6;
    node* lca=LCA(root,n1,n2);
    if(lca==NULL){
        cout<<"LCA doesn't exist"<<endl;
    }
    else{
        cout<<"LCA : "<<lca->data<<endl;
    }
return 0;
}