#include<bits/stdc++.h>
using namespace std;

void heapyfi(int a[],int n,int i){
        int largest=i;
        int l=2*i+1;
        int r=2*i+2;
        if(l<n && a[i]<a[l]){
            largest=l;
        }
        if(r<n && a[largest]<a[r]){
            largest=r;
        }
        if(i!=largest){
            swap(a[i],a[largest]);
            heapyfi(a,n,largest);
        }
}
void build_heap(int a[],int n){
        for(int i=(n/2-1);i>=0;i--){
            heapyfi(a,n,i);
        }
}

int  delete_heap(int a[],int &size){
    if(size<0){
        cout<<"Overflow"<<endl;
    }
    int max=a[0];
    a[0]=a[size-1];
    size=size-1;
    heapyfi(a,size,0);
return max;
}

void print_Heap(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
void increase_key(int a[],int key,int i){
    if(key<a[i]){
        cout<<"Error"<<endl;
        return;
    }
    a[i]=key;
    while(i>=0 && (a[i]>a[(i-1)/2])){
        swap(a[i],a[(i-1)/2]);
        i=(i-1)/2;
    }   

}
void decrease_key(int a[],int n,int key,int i){
    
    if(key>a[i]){
        cout<<"error"<<endl;
        return;
    }
    a[i]=key;
    heapyfi(a,n,i);
}
void insert_heap(int a[],int &n,int key){
    a[n]=key;
    n=n+1;
    for(int i=(n/2-1);i>=0;i--){
        heapyfi(a,n,i);
    }
}

int main(){
    int a[]={ 6, 13, 9, 15, 17};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<"Heap Build"<<endl;
    build_heap(a,n);
    print_Heap(a,n);

    cout<<"Increase Key"<<endl;
    int pos=4;
    increase_key(a,130,pos);
    print_Heap(a,n);

    cout<<"Decrease key"<<endl;
    decrease_key(a,n,3,0);
    print_Heap(a,n);

    cout<<"Insertion Heap"<<endl;
    insert_heap(a,n,500);
    print_Heap(a,n);

    cout<<"Deletion Heap"<<endl;
    cout<<delete_heap(a,n)<<endl;
    print_Heap(a,n);

return 0;
}

