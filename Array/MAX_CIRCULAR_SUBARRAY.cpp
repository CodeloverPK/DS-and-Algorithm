#include<bits/stdc++.h>
using namespace std;
int kadanes(int a[],int n){
    int sum=0;
    int mxsum=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(a[i]<0){
            sum=0;
        }
        mxsum=max(mxsum,sum);
    }
    return mxsum;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int wrapsum;  //  total sum of Array - sum of NonContributing element
    int nonwrapsum;  //  kadanes algorithm  
    nonwrapsum=kadanes(a,n);

    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=a[i];
        a[i]=-a[i];
    }

    wrapsum=totalsum - (-kadanes(a,n));

    cout<<max(wrapsum,nonwrapsum)<<endl;
return 0;
}
