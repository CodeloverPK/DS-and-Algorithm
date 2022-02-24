#include<bits/stdc++.h>
using namespace std;

void wavesort(int a[],int n){
    for(int i=1;i<=n-2;i+=2){
        if(a[i]>a[i-1]){
            swap(a[i],a[i-1]);
        }
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
}
int main(){
    int a[]={1,3,4,7,5,6,2};
    int n=sizeof(a)/sizeof(a[0]);
    wavesort(a,n);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
return 0;
}

/*
time = o(n)...
*/