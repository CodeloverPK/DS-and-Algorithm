#include<bits/stdc++.h>
using namespace std;

int clear_bit(int n,int pos){
    int mask= ~(1<<pos);
    return(n&mask);
}

int main()
{
 
    cout<<clear_bit(7,1);
    cout<<endl;
return 0;
}