#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    cout<<"Enter Number of elements:"<<endl;
    int n,i;
    cin>>n;
    int a[n];
    cout<<"Enter Aray elements : "<<endl;
        for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    cout<<"Sorted Array are : "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;    
return 0;
}


// Lets optimise the code guys........

// #include<bits/stdc++.h>
// using namespace std;



// int main()
// {
    
//     cout<<"Enter Number of elements:"<<endl;
//     int n,i;
//     cin>>n;
//     int a[n];
//     cout<<"Enter Aray elements : "<<endl;
//         for(i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int flag;
//     for(i=0;i<n-1;i++){
//          flag=0;
//         for(int j=0;j<n-1-i;j++){
//             if(a[j]>a[j+1]){
//                 swap(a[j],a[j+1]);
//                 flag=1;
//             }
//         }
//         if(flag==0){
//             break;
//         }
//     }
//     cout<<"Sorted Array are : "<<endl;
//     for(i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;    
// return 0;
// }