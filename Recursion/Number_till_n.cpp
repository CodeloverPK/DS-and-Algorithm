#include<bits/stdc++.h>
using namespace std;


void dec(int n){

    if(n==1){
        cout<<"1"<<" ";
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}

void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}
int main()
{
    inc(4);
    cout<<endl;
    dec(4);
    cout<<endl;
return 0;
}