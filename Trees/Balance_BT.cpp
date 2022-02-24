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
// int h(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     return 1+ max(h(root->left),h(root->right));
// }
// //O(n^2)......
// bool check(node* root){
//     if(root==NULL){
//         return true;
//     }

//     if(root->left){
//         int BF=abs((h(root->left)-h(root->right)));
//         if(BF<=1){
//             return true;
//         }
//         else{
//             false;
//         }
//     }
//     if(root->right){
//         int BF=abs((h(root->left)-h(root->right)));
//         if(BF<=1){
//             return true;
//         }
//         else{
//             false;
//         }
//     }
// return false;
// }

// int main(){
//     node* root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     // root->left->right=new node(5);
//     // root->right->left=new node(6);
//     // root->right->right=new node(7);
// cout<<check(root)<<endl;
// return 0;
// }


// By Teacher Method........


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
// int h(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     return 1+ max(h(root->left),h(root->right));
// }
// //O(n^2)......
// bool check(node* root){

//     if(root==NULL){
//         return true;
//     }
//     if(check(root->left)==false){
//         return false;
//     }
//     if(check(root->right)==false){
//         return false;
//     }

//     int lh=h(root->left);
//     int rh=h(root->right);
//     int BF=abs(lh-rh);
//     if(BF<=1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     node* root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     // root->left->right=new node(5);
//     // root->right->left=new node(6);
//     // root->right->right=new node(7);
// cout<<check(root)<<endl;
// return 0;
// }







// Optmised Approach.....


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

//O(n)......
bool check(node* root,int* height){

    if(root==NULL){
        return true;
    }

    int lh=0,rh=0;
    if(check(root->left,&lh)==false){
        return false;
    }
    if(check(root->right,&rh)==false){
        return false;
    }

    *height= 1+ max(lh,rh);

    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    // root->right=new node(3);
    root->left->left=new node(4);
    // root->left->right=new node(5);
    // root->right->left=new node(6);
    // root->right->right=new node(7);

    int height=0;
    cout<<check(root,&height)<<endl;
return 0;
}