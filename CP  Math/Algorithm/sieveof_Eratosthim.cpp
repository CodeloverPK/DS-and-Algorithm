// #include<bits/stdc++.h>
// using namespace std;


// void prime_sieve(int n){

//     int s[100]={0};

//     for(int i=2;i<=n;i++){

//         if(s[i]==0)
//         {
//             for(int j=i*i;j<=n;j+=i)
//             {
//                 s[j]=1;
//             }
//         }
//     }

//     for(int i=2;i<=n;i++){
//         if(s[i]==0)
//         {
//             cout<<i<<" ";
//         }
//     }cout<<endl;
// }

// void primefactor_sieve(int n){
//             int spf[100];
//             for(int i=2;i<=n;i++){
//                 spf[i]=i;
//             }
//             for(int i=2;i<=n;i++){
//                 if(spf[i]==i){
//                     for(int j=i*i;j<=n;j+=i){
//                         if(spf[j]=j){
//                             spf[j]=i;
//                         }
//                     }
//                 }
//             }

//             while(n!=1){
//                 cout<<spf[n]<<" ";
//                 n=n/spf[n];
//             }cout<<endl;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     // prime_sieve(n);
//     primefactor_sieve(n);

// return 0;
// }



#include<bits/stdc++.h>
using namespace std;

// prime upto given number ....
void primesieve(int n){
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }cout<<endl;
}

void primefac(int n){
    int spf[100]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }

    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                    if(spf[j]=j){
                        spf[j]=i;
                    }
            }
        }
    }

    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    // primesieve(n);
    primefac(n);
    cout<<endl;
return 0;
}