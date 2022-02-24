#include<bits/stdc++.h>
using namespace std;
bool isperfect(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n && n!=1){
        return true;
    }
return false;
}
int maxsumInSubarray(int a[],int n,int k){
    if(n<k){
        cout<<"Invalid Value"<<endl;
        return -1;
    }
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    int ans=sum;
    for(int i=k;i<n;i++){
        sum=sum+a[i]-a[i-k]; // sliding aproach.
        ans=max(ans,sum);
    }
return ans;  
}
int Max_perfectNum_sizeK(int a[],int n,int k){
        int sum=0;
        for(int i=0;i<n;i++){
            if(isperfect(a[i])){
                a[i]=1;
            }else{
                a[i]=0;
            }
        }
    return maxsumInSubarray(a,n,k);
}
int main(){
    int a[]={1,2,3,6,28,496};
    int n=6;
    int k=3;
    cout<<Max_perfectNum_sizeK(a,n,k)<<endl; 
return 0;
}


