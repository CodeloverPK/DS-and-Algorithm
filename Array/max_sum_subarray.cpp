#include<bits/stdc++.h>
using namespace std;

//kadane's Algorithm

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++){
        cin>>a[i];
    }

    int curr_sum=0;
    int mxsum=INT_MIN;
    for(int i=0;i<n;i++){
        curr_sum+=a[i];

        if(curr_sum<0){
            curr_sum=0;
        }
        mxsum=max(mxsum,curr_sum);
    }
    cout<<mxsum<<endl;
return 0;
}