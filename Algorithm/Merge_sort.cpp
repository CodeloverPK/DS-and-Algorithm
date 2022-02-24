#include<bits/stdc++.h>
using namespace std;

const int N=1e7+10;
int a[N];
void merge(int l,int r,int mid){
        int l_size=mid-l+1; // size of left array
        int L[l_size];
        int r_size=r-mid;// size of right array
        int R[r_size];
        for(int i=0;i<l_size;i++){
            L[i]=a[i+l];//  a[i+l] me l add , bcz every time left aaray will starts from l 
        }
        for(int i=0;i<r_size;i++){
            R[i]=a[i+mid+1];//  a[i+mid+1] me (mid+1) , bcz every time right aaray will starts from mid+1;
        }

        L[l_size]=R[r_size]=INT_MAX;
        int x=0;int y=0;
        
        for(int i=l;i<=r;i++){
            if(L[x]>=R[y]){
                a[i]=R[y];
                y++;
            }
            else{
                a[i]=L[x];
                x++;
            }
        }   
}
void mergesort(int l,int r){
    if(l==r) return;
    int mid=(l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    merge(l,r,mid);
}
int main(){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        mergesort(0,n-1);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
         cout<<endl; 
return 0;
}
