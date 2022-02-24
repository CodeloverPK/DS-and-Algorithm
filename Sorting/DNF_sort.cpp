#include<bits/stdc++.h>
using namespace std;
void DNFsort(int a[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[mid],a[low]);
            mid++;low++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            swap(a[mid],a[high]);
            high--;
        }
    }
}
int main(){
    int a[]={0,0,1,2,0,1,2,1,1,2,2};
    int n=sizeof(a)/sizeof(a[0]);
    DNFsort(a,n);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
return 0;
}

/*
DNF  stands for Duch National Falg.....
O(n)..
*/