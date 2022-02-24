// //insertion sort

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//             cin >> a[i];

//         for(int i=1;i<n;i++){
//             int j=i-1;
//             int current=a[i];
//             while(a[j]>current&&j>=0){
//                 a[j+1]=a[j];
//                 j--;
//             }
//             a[j+1]=current;
//         }    
//         for (int i = 0; i < n; i++)
//             cout<<a[i]<<" ";
//         cout<<endl;    
//     return 0;
// }



//selection sort

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//             cin >> a[i];

//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 if(a[i]>a[j])
//                 swap(a[i],a[j]);
//             }
//         }

//         for (int i = 0; i < n; i++)
//             cout<<a[i]<<" ";
//         cout<<endl;    
//     return 0;
// }

// bubble sort

#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n-1-i;j++){
        //         if(a[j]>a[j+1])
        //         swap(a[j],a[j+1]);
        //     }
        // }
       
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    // swap(arr[i],arr[j]);
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        // for (int i = 0; i < n; i++)
        //     cout<<a[i]<<" ";
        // cout<<endl;
        
        for(auto i:arr){
            cout<<i<<" ";
        }cout<<endl;
    return 0;
}

