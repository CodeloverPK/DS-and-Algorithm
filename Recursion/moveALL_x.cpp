// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s="axxbdxcefxhix";
//     string s2,s3;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='x'){
//             s2.push_back(s[i]);
//         }
//         else{
//             s3.push_back(s[i]);
//         }
//     }
//     cout<<(s3+s2)<<endl;
// return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// string movex(string s){
//     if(s.size()==0){
//         return "";
//     }
//     char ch=s[0];
//     string ans=movex(s.substr(1));
//     if(ch=='x'){
//         return ans+ch;
//     }
//     else{
//         return ch+ans;
//     }
// }
// int main(){
//     string s="axxbdxcefxhix";
//     cout<<movex(s)<<endl;
// return 0;
// }


//  substring....

#include<bits/stdc++.h>
using namespace std;
void sub_set(string st,string ot,int i){
        // if(i==st.size()){
        //     cout<<"{";
        //     for(auto idx:ot){
        //         cout<<idx;
        //     }
        //     cout<<"}";
        //     cout<<endl;
        //     return;
        // }
        if(i==st.size()){
            cout<<"{"<<ot<<"}"<<endl;
            return;
        }
        
        sub_set(st,ot,i+1);
        ot.push_back(st[i]);
        sub_set(st,ot,i+1);
}
int main(){
    string st="ABC";
    string ot="";
    sub_set(st,ot,0);
return 0;
}