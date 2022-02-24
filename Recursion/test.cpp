//First and Last Occurance of an element.......................................

// #include<bits/stdc++.h>
// using namespace std;
// int firstOcc(int a[],int n,int i,int key){

//     if(i==n){
//         return -1;
//     }
//     if(a[i]==key){
//         return i;
//     }
//     return firstOcc(a,n,i+1,key);
// }
// // It's also easy just to think...
// int lastOcc(int a[],int n,int i,int key){

//     if(i==n){
//         return -1;
//     }

//     int restarray= lastOcc(a,n,i+1,key);
//     if(restarray!=-1){
//         return restarray;
//     }

//     if(a[i]==key){
//         return i;
//     }
// return -1;
// }

// int main(){
//     int a[]={4,2,1,2,4,5,2,7};
//     int n=sizeof(a)/sizeof(a[0]);
//     cout<<lastOcc(a,n,0,10)<<endl;
//     // cout<<firstOcc(a,n,0,2)<<endl;
// return 0;
// }




// reverse string ...............................

// #include<bits/stdc++.h>
// using namespace std;

// void print(string s,int i){
//     if(i==s.size()){
//         return;
//     }
//     print(s,i+1);
//     cout<<s[i];
// }
// int main(){
//     string s;
//     cin>>s;
//     print(s,0);
//     cout<<endl;
// return 0;
// }


//  pi   replace by 3.14 .........................


// #include<bits/stdc++.h>
// using namespace std;

// void replace(string s){
//     if(s.size()==0){
//         return;
//     }
//     if((s[0]=='p')&&(s[1]=='i')){
//         cout<<"3.14";
//         replace(s.substr(2));
//     }
//     else{
//         cout<<s[0];
//         replace(s.substr(1));
//     }
// }
// int main(){
//     string s="pippxxppiixpi";
//     // cout<<s.size()<<endl;
//     replace(s);
// return 0;
// }


// TOH..........
// source is A , destination B , helper is C.......

// #include<bits/stdc++.h>
// using namespace std;

// void toh(int n,char a,char b,char c){

//     if(n==0){
//         return;
//     }
//     toh(n-1,a,c,b);
//     cout<<"Move 1 Disc form "<<a<<" to "<<b<<endl;
//     toh(n-1,c,b,a);
// }
// int main(){
//     int n;
//     cin>>n;
//     toh(n,'A','B','C');
// return 0;
// }


