#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int binary=0,i=1;
    int rem;
    while(n){
        rem=n%2;
        binary=binary+rem*i;
        n=n/2;
        i=i*10;
    }
    cout<<binary<<endl;
return 0;
}