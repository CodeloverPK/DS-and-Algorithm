#include<bits/stdc++.h>
using namespace std;

void countsort(int a[],int n){
    int k=a[0];
    for(int i=0;i<n;i++){
        k=max(k,a[i]);
    }
    int count[k+1]={0};// max ele ke size of hash array bana raha hu...
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    for(int i=1;i<=k;i++){
        count[i]=count[i]+count[i-1];
    }
    int ans[n]={0};
    for(int i=n-1;i>=0;i--){
        ans[--count[a[i]]]=a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=ans[i];
    }
    // for(int i:ans){
    //     cout<<i<<" ";
    // }cout<<endl;
}
int main(){
    int a[]={1,2,2,3,6,5,1,2};   
    int n=sizeof(a)/sizeof(a[0]);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    countsort(a,n);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
return 0;
}

/*
sorting by counting the element in aaray ...
O(n)...
*/