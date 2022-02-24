#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int l,int r){
    int i=l-1;
    int pivot=a[r];
    for(int j=l;j<r;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
return i+1;
}
void Quicksort(int a[],int l,int r){
    if(l<r){
        int p=partition(a,l,r);
        Quicksort(a,l,p-1);
        Quicksort(a,p+1,r);
    }
}
int main(){
    int a[]={5,7,6,1,3,2,4,6,8,4};
    int size=sizeof(a)/sizeof(a[0]);
    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;

    Quicksort(a,0,size-1);

    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;

return 0;
}


/*
space -  Hight of Tree 
best case O(logn)
worse case O(n)

Time- 
best case O(nlogn)
worse case O(n^2)

*/

