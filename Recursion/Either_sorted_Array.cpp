#include<bits/stdc++.h>
using namespace std;


// int check(int a[],int n){
//     bool flag=true;
//     for(int i=0;i<n;i++){
//         if(a[i]>a[i+1]){
//             flag=false;
//         }
//     }
//     if(flag){
//         return 1;
//     }
//     else{
//         return 0;
//     }
    
// }

bool  sorted(int a[],int n){
    if(n==1){
        return true;
    }
    bool restArray=sorted(a+1,n-1);
    return (a[0]<a[1]&&restArray);
}


int main()
{
    int a[]={1,2,3,4,5,6,7};
    cout<<sorted(a,7)<<endl;
return 0;
}