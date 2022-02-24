#include<bits/stdc++.h>
using namespace std;


// update_bit=clear_bit + set_bit   .......

int update_bit(int n,int pos,int value){
    int mask=~(1<<pos);
    n=n&mask;

    return(n|(value<<pos));

}

int main()
{
    cout<<update_bit(5,1,1);
    cout<<endl;
return 0;
}