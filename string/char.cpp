// #include<bits/stdc++.h>
// using namespace std;



// int main()
// {

//     int n;
//     cin>>n;

//     char a[n+1];
//     cin>>a;
//     bool check=true;
//     for(int i=0;i<n;i++){
//         if(a[i]!=a[n-1-i]){
//             check=false;
//         }

//     }
//     if(check){
//         cout<<"Pelindrome"<<endl;
//     }
//     else{
//         cout<<"Not a Pelindrome"<<endl;
//     }
// return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     char arr[n+1];
//     cin>>arr;
//     // cout<<arr<<endl;
//     // for(int i=0;i<n;){
//     //     cout<<arr[i]<<endl;
//     // }
//     // int i=0;
//     // while(arr[i]!='\0'){
//     //     cout<<arr[i]<<" ";
//     //     i++;
//     // }cout<<endl;

//     bool flag=1;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=arr[n-1-i]){
//             flag=0;
//             break;
//         }
//     }
//     if(flag){
//         cout<<"pelindrom"<<endl;
//     }
//     else{
//         cout<<"Not pelindrom"<<endl;
//     }
// return 0;
// }




#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char st[n+1];
    cin.ignore();// it must needed
    cin.getline(st,n);
    // string st;
    // cin>>st;
    int i=0;
    int mxlength=INT_MIN;
    int currlength=0;
    while(1){
        if(st[i]==' '||st[i]=='\0'){    
            mxlength=max(mxlength,currlength);
            currlength=0;
        }
        else{
            currlength++;
        }
        if(st[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<mxlength<<endl;
return 0;
}