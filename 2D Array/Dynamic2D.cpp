// Returning of 1 D aaray....

// #include<bits/stdc++.h>
// using namespace std;

// int* Array(int *a,int n){
//     for(int i=0;i<n;i++){
//         a[i]+=10;
//     }
//     return a;
// }
// int main(){
//     int n;
//     cin>>n;
//     int *a=new int[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<*(a+i)<<" ";
//     }cout<<endl;


//     int *b=Array(a,n);

//     for(int i=0;i<n;i++){
//         cout<<b[i]<<" ";
//     }cout<<endl;
// return 0;
// }


// 2D array.....


#include<bits/stdc++.h>
using namespace std;

int **Array(int **a,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]+=10;
        }
    }
    return a;
}
int main(){
    int n;
    cin>>n;

    int **a= new int *[n];

    for(int i=0;i<n;i++){
         a[i]=new int[n]; // her ek row ko ek ek aaray dete huye
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }

    int **b=Array(a,n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }cout<<endl;
    }
return 0; 
}