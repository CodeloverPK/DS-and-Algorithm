
#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int r){
    int i=l-1;
    for(int k=l;k<r;k++){
        if(a[k]<a[r]){
            i++;
            swap(a[k],a[i]);
        }
    }
    swap(a[i+1],a[r]);
    return (i+1);
}
void Quicksort(int a[],int l,int r){
    if(l<r){
        int p=partition(a,l,r);
        Quicksort(a,l,p-1);
        Quicksort(a,p+1,r);
    }
}

void merge(int a[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;

    int left[n1+1];
    int right[n2+1];

    for(int i=0;i<n1;i++){
        left[i]=a[i+l];
    }
    for(int i=0;i<n2;i++){
        right[i]=a[mid+1+i];
    }
    int i=0,j=0;
    left[n1]=right[n2]=INT_MAX;

    for(int k=l;k<=r;k++){
        if(left[i]>=right[j]){
            a[k]=right[j];
            j++;
        }
        else{
            a[k]=left[i];
            i++;
        }
    }
}
void mergesort(int a[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}
int main(){
    int a[]={12,2,3,4,6,1,9,8,10,11};
    int size=sizeof(a)/sizeof(a[0]);
    // Quicksort(a,0,size-1);
    mergesort(a,0,size-1);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
return 0;
}