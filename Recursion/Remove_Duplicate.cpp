#include<bits/stdc++.h>
using namespace std;
string removeDu(string s){
    if(s.size()==0){
        return "";
    }
    char ch=s[0];
    string ans=removeDu(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    else{
        return ch+ans;
    }
}
int main(){
    string s="aaaabbbbccccdeee";
    cout<<removeDu(s)<<endl;
return 0;
}