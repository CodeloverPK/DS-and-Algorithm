#include<bits/stdc++.h>
using namespace std;

int get_bit(int n,int pos){
    return((n&(1<<pos))!=0);
}

int main()
{
 
    cout<<get_bit(5,1);
    cout<<endl;
return 0;
}