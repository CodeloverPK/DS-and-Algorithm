// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e6+10;
// int hsh[N];
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     fill(hsh,hsh+N,-1);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         if(a[i]>=0){
//             hsh[a[i]]++;
//         }
//     }
//     for(int i=0;i<N;i++){
//         if(hsh[i]==-1){
//             cout<<i<<endl;
//             break;
//         }
//     }

// return 0;
// }



#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 +10;
int hsh[N];
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=0)
         hsh[a[i]]=1;
    }
    for(int i=0;i<N;i++){
        if(hsh[i]==0){
            cout<<i<<endl;
            return 0;
        }
    }cout<<endl;
return 0;
}