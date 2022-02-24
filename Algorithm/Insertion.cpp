#include<bits/stdc++.h>
using namespace std;



int main()
{
    int i, key;
    cout<<"Enter Number of elements:"<<endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter Aray elements : "<<endl;
        for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(int j=1;j<n;j++){
        key=a[j];
        i=j-1;
        while(i>=0 && a[i]>key){
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
    }
    cout<<"Sorted Array are : "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
return 0;
}