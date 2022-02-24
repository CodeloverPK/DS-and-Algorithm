#include<bits/stdc++.h>
using namespace std;
int MinsumSubarraySized_K(int a[],int n,int k){
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    int ans=sum;
    for(int i=k;i<n;i++){
        sum=sum+a[i]-a[i-k];
        ans=min(ans,sum);
    }
    return ans;
}
int main(){
    int a[]={-2,10,1,3,0,-1,4,5};
    int n=8;
    int k=3;
    cout<<MinsumSubarraySized_K(a,n,k)<<endl;
return 0;
}