#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    cout<<"Enter Number of elements:"<<endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter Aray elements : "<<endl;
        for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        if(min!=i){
            swap(a[min],a[i]);
        }
    }
    cout<<"Sorted Array are : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;    
return 0;
}
