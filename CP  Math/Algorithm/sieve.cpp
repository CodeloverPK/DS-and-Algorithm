// #include<bits/stdc++.h>
// using namespace std;


// void primenumber(int n){
//     int a[100]={0};
//     for(int i=2;i<=n;i++){
//         if(a[i]==0){
//             for(int j=i*i;j<=n;j+=i){
//                 if(a[j]==0){
//                     a[j]=1;
//                 }
//             }
//         }
//     }

//     for(int i=2;i<=n;i++){
//         if(a[i]==0){
//             cout<<i<<" ";
//         }
//     }cout<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     primenumber(n);
// return 0;
// }




#include<bits/stdc++.h>
using namespace std;


void primefactor(int n){

    int sp[100]={0};

    for(int i=2;i<=n;i++){
        sp[i]=i;
    }

    for(int i=2;i<=n;i++){
        if(sp[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(sp[j]==j){
                    sp[j]=i;
                }
            }
        }
    }

    while(n!=1){
        cout<<sp[n]<<" ";
        n=n/sp[n];
    }
}
int main(){
    int n;
    cin>>n;
    primefactor(n);
return 0;
}
