
// print spelling .....

// #include<bits/stdc++.h>
// using namespace std;

// string s[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

// void print(int n){

//     if(n==0){
//         return;
//     }

//     int rem=n%10;
//     print(n/10);
//     cout<<s[rem];

// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
//     cout<<endl;
// return 0;
// }





//  sorted or unsorted ........


// #include<bits/stdc++.h>
// using namespace std;

// bool check(int a[],int i,int size){
//     // only 1 element  ...
//     if(i==size){
//         return 1;
//     }
//     //checking
//     if(a[i]>a[i+1]){
//         return 0;
//     }
//     return check(a,i+1,size);

// }
// int main(){
//     int a[]={1,2,3,9,40,500,501,700,3000};
//     int n=sizeof(a)/sizeof(a[0]);
//     cout<<"Array Element : "<<endl;
//     for(int i:a){
//         cout<<i<<" ";
//     }cout<<endl;
//     if(check(a,0,n-1)){
//         cout<<"Sorted"<<endl;
//     }
//     else{
//         cout<<"Unsorted"<<endl;
//     }
// return 0;
// }

// SUBSET  OR POWERSET  ......



// #include<bits/stdc++.h>
// using namespace std;
// void sub_set(vector<int> input ,vector<int> output, int idx){

//         if(idx>=input.size()){
//                 for(auto j:output){
//                     cout<<j<<" ";
//                 }cout<<endl;
//             return;
//         }
//         sub_set(input,output,idx+1);
//         output.push_back(input[idx]);
//         sub_set(input,output,idx+1);
// }
// int main(){
//     int size;
//     cin>>size;
//     vector<int>input;
//     for(int i=0;i<size;i++){
//         int x;
//         cin>>x;
//         input.push_back(x);
//     }
//     vector<int>output;
//     sub_set(input,output,0);

// return 0;
// }




// subsequence......

// #include<bits/stdc++.h>
// using namespace std;
// void sub_set(string input ,string output, int idx){

//         if(idx==input.size()){
//                 cout<<output<<endl;
//             return;
//         }
//         sub_set(input,output,idx+1);
//         output.push_back(input[idx]);
//         sub_set(input,output,idx+1);
// }
// int main(){
//     string input;
//     cin>>input;
//     string output="";
//     sub_set(input,output,0);

// return 0;
// }



// permutation ....


// #include<bits/stdc++.h>
// using namespace std;
// void sub_set(string input , int idx){

//         if(idx==input.size()){
//                 cout<<input<<endl;
//             return;
//         }
//        for(int i=idx;i<input.size();i++){
//              swap(input[idx],input[i]);
//              sub_set(input,idx+1);
//             swap(input[idx],input[i]);
//        }
// }
// int main(){
//     string input;
//     cin>>input;
//     string output="";
//     sub_set(input,0);

// return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int NoJumps(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return NoJumps(n-1)+NoJumps(n-2)+NoJumps(n-3);

}
int main(){
    int n;
    cin>>n;
    cout<<NoJumps(n)<<endl;
return 0;
}