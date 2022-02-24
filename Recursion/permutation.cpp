// #include<bits/stdc++.h>
// using namespace std;


// void permutation(string s,string ans){
    
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         string ros=s.substr(0,i)+s.substr(i+1);
//         permutation(ros,ans+ch);
//     }
// }
// int main()
// {
//     permutation("ABC"," ");
//     return 0;
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;
void permute(string s,int idx){
    if(idx==s.size()){
        cout<<s<<endl;
        return;
    }
    for(int i=idx;i<s.size();i++){
        swap(s[idx],s[i]);
        permute(s,idx+1);
        swap(s[idx],s[i]);
    }
}
int main(){
    string s="ABCD";
    permute(s,0);
return 0;
}

