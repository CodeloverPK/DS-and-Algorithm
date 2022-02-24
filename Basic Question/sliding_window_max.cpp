#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,3,-1,-3,5,3,6,7};
    int n=sizeof(a)/sizeof(a[0]);// 8
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    int k;
    cin>>k;
    cout<<"Window size "<<k<<endl;

    for(int i=0;i<(n-k+1);i++){
        // cout<<a[i]<<" ";

        int temp[k];
        for(int i=0;i<k;i++){
            temp[i]=0;
        }
        
        for(int st=i;st<(k+i);st++){
            // cout<<a[st]<<" ";
            for(int j=0;j<k;j++){
                temp[j]=a[st+j];
            }
        cout<<*max_element(temp,temp+k)<<" ";
        break;
        }
    }cout<<endl;
return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a[]={2,3,4,5,-50};
//     int n=sizeof(a)/sizeof(a[0]);
//     cout<<*max_element(a,a+n)<<endl;
// return 0;
// }