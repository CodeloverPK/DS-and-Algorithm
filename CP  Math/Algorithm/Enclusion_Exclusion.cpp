#include<bits/stdc++.h>
using namespace std;


// Find number of diviser in a number which is divisible by both a and b
int count(int n,int a,int b){
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    return (c1+c2-c3);
}
int main(){
    int n;
    cin>>n;
    int ans = count(n,5,7);
    cout<<ans<<endl;
return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int number(int n,int a,int b){
//     int ct=0;
//     for(int i=1;i<=n;i++){
//         if((i%a==0)&&(i%b==0))
//             ct++;
//     }
//     return ct;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=number(n,5,7);
//     cout<<ans<<endl;
  
// return 0;
// }