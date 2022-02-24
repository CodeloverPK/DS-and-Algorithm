//  Max Heap

#include<bits/stdc++.h>
using namespace std;

void deleteHeap(int a[],int &n){
    a[0]=a[n-1];
    n=n-1;
    int i=0;
    // int larger=-1;

    while(i<n){
        int left=2*i+1;
        int right=2*i+2;
        int larger=-1;
        if(left<n && right < n){
            larger = (a[left]>a[right])?left:right;
        }else if(left<n){
            larger=left;
        }else{
            larger=right;
        }

        if(larger >=n )  return ;

        if(a[larger]>a[i]){
            swap(a[larger],a[i]);
            i=larger;
        }else{
            return ;
        }
    }

}
void insert(int a[],int &n,int value){
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
int main(){
    int arr[]={10,7,6,5,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    insert(arr,n,20);
    print(arr,n);

    deleteHeap(arr,n);

    print(arr,n);
return 0;
}







