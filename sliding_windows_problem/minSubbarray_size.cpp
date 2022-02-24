#include<bits/stdc++.h>
using namespace std;

int minSubarray_size(int a[],int n,int x){
        int sum=0,ans=INT_MAX;
        int start=0;
        int end=0;
        while(end<n){
            while(sum<=x && end<n){
                sum+=a[end++];        // sum=56, end=4;
            }
            while(sum>x && start<n){
                if((end-start)<ans){
                    ans=end-start;
                }
                sum-=a[start++];      // sum=56-1= 55
            }
        }
    return ans;
}
int main(){
    int a[]={1,4,45,6,10,19};
    int n=6;
    int x=51;
    cout<<minSubarray_size(a,n,x)<<endl; 
return 0;
}