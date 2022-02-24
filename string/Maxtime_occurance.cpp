#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s="abcfeeeeeeddddddddddddddddddd";

    int frq[26];
    for(int i=0;i<26;i++){
        frq[i]=0;
    }

    for(int i=0;i<s.size();i++){
        frq[s[i]-'a']++;
    }

    char ans='a';
    int maxF=0;
    for(int i=0;i<26;i++){
        if(frq[i]>maxF){
            maxF=frq[i];
            ans=i+'a';
        }    
        
    }
    cout<<"MaxFrequent character is  "<<ans<<endl;
return 0;
}