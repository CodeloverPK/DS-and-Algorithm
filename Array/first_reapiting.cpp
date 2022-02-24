// #include<bits/stdc++.h>
// using namespace std;
// const int  N=1e7+10;
// int hsh[N];

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     fill(hsh,hsh+N,-1);

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     int minidx=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(hsh[a[i]]!=-1){
//             minidx=min(minidx,hsh[a[i]]);
//         }
//         else{
//             hsh[a[i]]=i;
//         }
//     }
    // if(minidx==INT_MAX){
    //     cout<<"-1"<<endl;
    // }
    // else{
    //     cout<<(minidx+1)<<endl;  //  +1   bcz 1 indexed lana hai ans ko
    // }

// return 0;
// }



#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int h[N];
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    fill(h,h+N,-1);
    int minidx=INT_MAX;
    for(int i=0;i<n;i++){
        if(h[a[i]]!=-1){
            minidx=min(minidx,h[a[i]]);
        }
        else{
            h[a[i]]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<a[(minidx)]<<endl;  //  +1   bcz 1 indexed lana hai ans ko
    }   
return 0;
}
