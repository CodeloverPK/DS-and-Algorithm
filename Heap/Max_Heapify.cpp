//  Max Heap

#include<bits/stdc++.h>
using namespace std;


void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
void heapify(int a[],int n,int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<n && a[largest]<a[l]){
        largest = l;
    }
    if(r<n && a[largest] < a[r]){
        largest = r;
    }

    if(largest != i){
        swap(a[largest],a[i]);
        heapify(a,n,largest);
    }
}
void build_heap(int a[],int n){
    for(int i=(n-1)/2;i>=0;i--){
        heapify(a,n,i);
    }
}
int main(){
    int a[]={20,10,30,5,50,40,60};
    int n=sizeof(a)/sizeof(a[0]);

    print(a,n);

    build_heap(a,n);

    print(a,n);
return 0;
}