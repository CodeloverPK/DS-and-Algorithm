// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,k;
//     cin>>n>>k;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     sort(a,a+n);

// cout<<"sorted element are : "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }cout<<endl;

//     int low=0;
//     int high=n-1;
//     while(low<high){
//         int sum=a[low]+a[high];
//         if(sum==k){
//             cout<<low+1<<" "<<high+1<<endl;
//             cout<<"Yes, Pair are present at above index"<<endl;
//             break;
//         }
//         else if(sum<k){
//             low++;
//         }
//         else{
//             high--;
//         }
//     }
//     if(low>=high)
//        cout<<"Pairs not present"<<endl;

// return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,key;
//     cin>>n>>key;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     int sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             int sum=a[i]+a[j];
//             if(sum==key){
//                 cout<<"Yes pair is present"<<endl;
//                 return 0;
//             }

//         }
//     }
//     cout<<"Not present"<<endl;
// return 0;
// }

// optimised Approach ......


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    int st=0;
    int end=n-1;

    while(st<end){
        int sum=a[st]+a[end];
        if(sum==key){
            cout<<(st+1)<<" "<<(end+1)<<endl;
            cout<<"Yes"<<endl;
            return 0;
        }
        else if(sum>key){
            end--;
        }
        else{
            st++;
        }
    }
    if(st>=end){
        cout<<"Not Present"<<endl;
    }
    
return 0;
}