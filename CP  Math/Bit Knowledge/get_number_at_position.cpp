#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x=7812354;
    int num=x;

    int position;
    cin>>position;

    int count=0;
    while(x!=0){
        x/=10;
        count++;
    }
    cout<<count<<endl;

    int ans=0;
    while(count>=position){
        ans=num%10;
        num/=10;
        count--;
    }
    cout<<ans<<endl;
return 0;
}

