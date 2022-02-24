#include<bits/stdc++.h>
using namespace std;


int friendpairing(int n){
    if(n==0||n==1||n==2){
        return n;
    }
    return (friendpairing(n-1) + friendpairing(n-2)*(n-1));
}
int main()
{
    cout<<friendpairing(4)<<endl;
return 0;
}