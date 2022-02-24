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
void heap_sort(int a[],int n){
    build_heap(a,n);

    for(int i=n-1;i>=0;i--){
        swap(a[i],a[0]);
        heapify(a,i,0);
        // print(a,i+1);
    }    

}
int main(){
    int a[]={40,10,30,50,60,15};
    int n=sizeof(a)/sizeof(a[0]);

    print(a,n);
    cout<<endl;
    heap_sort(a,n);
    
    cout<<"\nSorted array is : "<<endl;
    print(a,n);
return 0;
}