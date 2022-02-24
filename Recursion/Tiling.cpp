#include<bits/stdc++.h>
using namespace std;

int tilesways(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return( tilesways(n-1) + tilesways(n-2));
}

int main()
{
    cout<<tilesways(4)<<endl;
return 0;
}