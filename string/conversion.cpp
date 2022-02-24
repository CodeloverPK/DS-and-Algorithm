#include<bits/stdc++.h>
using namespace std;



int main()
{
    // 'a' - 'A' =32
    //this is lowercase to uppercase conversion....

    // string str="abcdefghijkl";
    // for(int i =0;i<str.length();i++){
    //     if(str[i]>='a'||str[i]<='z'){
    //         str[i]-=32;
    //     }
    // }


    string str="abcdefJHGDGDG";
    // transform(str.begin(),str.end(),str.begin(),::tolower);
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
return 0;
}