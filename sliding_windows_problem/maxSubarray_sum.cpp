#include<bits/stdc++.h>
using namespace std;

int maxSubarray(int a[],int n,int k,int x){
        int sum=0,ans=0;
        for(int i=0;i<k;i++){
            sum+=a[i];
        }
        // int ans=sum;
        if(sum<x){
            ans=sum;
        }
        for(int i=k;i<n;i++){
            sum=sum+a[i]-a[i-k];
            if(sum<x){
                ans=max(ans,sum);
            }
        }
    return ans;
}
int main(){
    int a[]={7,5,4,6,8,9};
    int n=6;
    int k=3;
    int x=20;
    cout<<maxSubarray(a,n,k,x)<<endl;
return 0;
}