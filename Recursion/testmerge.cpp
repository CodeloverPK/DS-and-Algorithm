#include<bits/stdc++.h>
using namespace std;



int main()
{
    int a[]={2,14,15,18};// it should be sorted.
    int b[]={1,3,6,7};// it should be sorted.

    int i=0,j=0,k=0;
    int arr[8];
    for(int i=0;i<8;i++){
        arr[i]=0;
    }

while(j<4&&k<4){

        if(a[j]>b[k]){
            arr[i]=b[k];
            k++;i++;
        }
        else{
            arr[i]=a[j];
            j++;i++;
        }
        
    }

    while(j<4){
        arr[i]=a[j];
        j++;i++;
    }
    while(k<4){
        arr[i]=a[k];
        k++;i++;
    }


    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
return 0;
}