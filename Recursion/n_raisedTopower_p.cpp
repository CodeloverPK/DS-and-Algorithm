#include<bits/stdc++.h>
using namespace std;

int power(int n,int p){
    // if(n==0){
    //     return 0;
    // }
    if(p==0){
        return 1;
    }
    int result=n*power(n,p-1);
    return result;
}

int main()
{
    cout<<power(0,4)<<endl;
return 0;
}