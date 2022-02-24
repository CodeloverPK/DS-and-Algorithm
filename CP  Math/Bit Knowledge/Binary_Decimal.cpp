#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int last_digit;
    int decimal=0;
    // int i=0;
    int i=1;
    while(n){
        last_digit=n%10;
        // decimal=decimal+last_digit*pow(2,i);
        decimal=decimal+last_digit*i;
        // i++;
        i=i*2;
        n=n/10;
    }
    cout<<decimal<<endl;
return 0;
}