#include<bits/stdc++.h>
using namespace std;

int check_num(int n){
    return (n&&!(n&(n-1)));
}

int main()
{
    // cout<<(4&&0)<<endl;

    cout<<check_num(14);
    cout<<endl;
return 0;
}