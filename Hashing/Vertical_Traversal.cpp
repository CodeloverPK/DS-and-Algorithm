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
void vertical_Traversal(node* &root,int hd,map<int ,vector<int>> &m){
    if(!root){
        return;
    }
    m[hd].push_back(root->data);
    vertical_Traversal(root->left,hd-1,m);
    vertical_Traversal(root->right,hd+1,m);
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    map<int ,vector<int>> m;
    vertical_Traversal(root,0,m);
    for(auto it=m.begin();it!=m.end();it++){
        for(int i=0;i<(it->second).size();i++){
            cout<<(it->second)[i]<<" ";
        }cout<<"\n";
   }
return 0;
}