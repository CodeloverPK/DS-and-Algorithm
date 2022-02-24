#include<bits/stdc++.h>
using namespace std;
void insert(int a[],int n,int value){
    n=n+1;
    a[n-1]=value;
    int i=n-1;
    while(i>0){
        int parent=(i-1)/2;
        if(a[parent]<a[i]){
            swap(a[parent],a[i]);
            i=parent;
        }else{
            return;
        }
    }
}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
void build_heap(int a[],int n){
    for(int i=0;i<n;i++){
        int x=a[i];
        insert(a,i,x);
         cout<<i<<" operation :  ";
        print(a,i);
    }
}
int main(){
    int a[]={20,10,30,5,50,40};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Given Array"<<endl;
    print(a,n);
    cout<<endl;
    build_heap(a,n);
    cout<<"\nFinal Answer"<<endl;
    print(a,n);

return 0;
}




// O(n*log(n))