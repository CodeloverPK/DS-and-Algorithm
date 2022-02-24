#include<bits/stdc++.h>
using namespace std;

// moving Discs from A to B usong C.
void toh(int n,char x,char y,char z){
        if(n==1){
            cout<<"Move disk "<<n<<" from tower "<<x<<" to tower "<<y<<"\n";
            return;
        }
        toh(n-1,x,z,y);
        cout<<"Move disk "<<n<<" from tower "<<x<<" to tower "<<y<<"\n";
        toh(n-1,z,y,x);
    }
int main()
{
    int n;
    cin>>n;
    toh(n,'A','B','C');
return 0;
}