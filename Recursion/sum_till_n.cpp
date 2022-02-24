#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    int result=n+sum(n-1);
    return result;
}

int main()
{
    cout<<sum(4)<<endl;
return 0;
}