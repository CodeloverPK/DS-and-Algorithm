// #include<bits/stdc++.h>
// using namespace std;



// int main()
// {
//     int n;
//     cin>>n;
//     char str[n+1];
//     cin.ignore();
//     cin.getline(str,n);
//     // cin.ignore();
// int curlen=0;
// int maxlen=0;

// int st=0;
// int maxst=0;
//     int i=0;
//     while (1)
//     {
//         if(str[i]==' '||str[i]=='\0'){
//             if(curlen>maxlen){
//                 maxlen=curlen;
//                 maxst=st;
//             }
//             curlen=0;
//             st=i+1;
//         }
//         else{
//             curlen++;
//         }
        
//         if(str[i]=='\0')
//             break;
//         i++;
//     }
//     cout<<maxlen<<endl;
//     for(int i=0;i<maxlen;i++){
//         cout<<str[i+maxst];
//     }
//     cout<<endl;
    
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin.ignore();
    cin.getline(arr,n);

    int currlen=0;
    int mxlen=0;

    int i=0;
    while(1){
        if(arr[i]==' '||arr[i]=='\0'){
            if(currlen>mxlen){
                mxlen=currlen;
            }
            currlen=0;
        }
        else{
            currlen++;
        }
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<mxlen<<endl;
return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     getline(cin,s);

//     // cout<<s<<endl;

//     int currlen=0;
//     int mxlen=0;

//     int idx=0;
//     int maxidx=0;

//     int i=0;
//     while(1){
//         if(s[i]==' '||s[i]=='\0'){
//             if(currlen>mxlen){
//                 mxlen=currlen;
//                 maxidx=idx;
//             }
//             currlen=0;
//             idx=i+1;
//         }
//         else{
//             currlen++;
//         }
//         if(s[i]=='\0'){
//             break;
//         }
//         i++;
//     }
//     cout<<mxlen<<endl;

//     for(int i=0;i<mxlen;i++){
//         cout<<s[i+maxidx];
//     }cout<<endl;
// return 0;
// }