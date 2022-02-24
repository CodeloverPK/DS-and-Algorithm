#include<bits/stdc++.h>
using namespace std;


void printbinary(int n){
    for(int i=7;i>=00;i--){
        cout<<((n>>i)&1);
    }cout<<endl;
}
// get bit.......

bool getbit(int n,int pos){
    return ( n&(1<<pos));
}

int setbit(int n,int pos){
    n=n|(1<<pos);
    return n;
}

int clearbit(int n,int pos){
    n=n&(~(1<<pos));
    return n;
}

// int countbit(int n){
//     int ct=0;
//     for(int i=31;i>=0;i--){
//         if(n&(1<<i)){
//             ct++;
//         }
//     }
//     return ct;
// }

int countbit(int n){
    int ct=0;
    while(n){
        n=n&(n-1);
        ct++;
    }
    return ct;
}


// power of two  in a number ....

int power(int n){
    int ct=0;
    while(n!=1){
        n=n/2;
        ct++;
    }
    return ct;
}

bool checkPower2(int n){
    return( !( n & (n&(n-1))));
}
int main(){
    int a=13;
    // cout<<(a<<4)<<endl;
    // cout<<(a>>4)<<endl;
    printbinary(a);
    cout<<getbit(a,0)<<endl;

    // printbinary(setbit(a,1));
    printbinary(clearbit(a,2)); // this also called bit masking 

   
    // cout<<"Number of 1's  count in a = "<<__builtin_popcount(a)<<endl;
    cout<<"Number of 1's  count in a = "<<countbit(a)<<endl;



    // toggle bit   (  mtlb ith posn pr jakr bit ko toggle kr do ( 1<->0 ).....)
    int b=5;   
    int i =1;//  position where we have to toggle.
    printbinary(b^(1<<i));


    if(checkPower2(16)){
        cout<<"Yes it is power of 2"<<endl;
    }
    else{
        cout<<"Not Power of 2"<<endl;
    }

return 0;
}