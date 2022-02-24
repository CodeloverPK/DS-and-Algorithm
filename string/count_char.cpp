// #include<bits/stdc++.h>
// using namespace std;
// int hsh[26];
// int main(){
//     string s;
//     cin>>s;

//     for(int i=0;i<s.length();i++){
//         hsh[s[i]-'a']++;// hash array.
//     }
//     int mxct=INT_MIN;
//     for(int i=0;i<26;i++){
//         mxct=max(mxct,hsh[i]);
//     }
//     cout<<mxct<<endl;
// return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int hsh[26];
int main(){
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
     
        hsh[s[i]-'a']++;// hash array.
    }
    int ans=0;
    int mxct=INT_MIN;
    for(int i=0;i<26;i++){
        if(hsh[i]>mxct){
            mxct=hsh[i];
            ans=i+'a';
        }
    }
    // cout<<mxct<<endl;
    cout<<mxct<<endl<<(char)ans<<endl;
return 0;
}