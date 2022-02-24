// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of Lines "<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//             for (int k=n; k > i; k--){
//                 cout<<" ";
//             }  
//             for(int j=0;j<i;j++){
//                 cout<<"*";
//             }
//         cout<<endl;
//     }
// }


#include<bits/stdc++.h>
using namespace std;
bool check(string s){

    bool ans=true;
    stack<char> st;

    for(int i=0;i<s.length();i++){
        if(s[i]=='{'||s[i]=='['||s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]=='}'){
            if(!st.empty()&&st.top()=='{'){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]==')'){
            if(!st.empty()&&st.top()=='('){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]==']'){
            if(!st.empty()&&st.top()=='['){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }
    if(!st.empty()){
        return false;
    }

return ans;
}
int main(){
    string st="[{()}][][";

    if(check(st)){
        cout<<"valid"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
return 0;
}