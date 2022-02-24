#include<bits/stdc++.h>
using namespace std;



int main()
{
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        int mxno=INT_MIN;
        int minno=INT_MAX;
        
        for(int i=0;i<n;i++){
            mxno=max(a[i],mxno);
            minno=min(a[i],minno);
        }    
        cout<<"Max number is "<<mxno<<" Min number is "<<minno<<endl;
return 0;
}