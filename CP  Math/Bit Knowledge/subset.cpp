// #include<bits/stdc++.h>
// using namespace std;

// void subset(int a[],int n){
//     for(int i=0;i<(1<<n);i++){
//         for(int j=0;j<n;j++){
//             if(i&(1<<j)){
//                 cout<<a[j]<<" ";
//             }
//         }cout<<endl;
//     }
// }

// int main()
// {
//     int a[]={1,2,3};
//     subset(a,3);
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;
void subset(int a[],int n){
        for(int i=0;i<(1<<n);i++){
            for(int j=0;j<n;j++){
                if(i&(1<<j)){ //  Dry run kr le bhai....
                    cout<<a[j]<<" ";
                }
            }cout<<endl;
        }

    cout<<endl;    
}
int main(){
    int a[]={2,3,4};
    subset(a,3);
return 0;
}