// #include<bits/stdc++.h>
// using namespace std;
// const int row=4;
// const int col=4;
// int checksparse(int a[row][col]){
//     int count=0;
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 if(a[i][j]==0){
//                     count++;
//                 }
//             }
//         }
//         if(count>=(row*col)/2){
//             return count;
//         }
//     return -1;    
// }
// int main(){

//     int a[row][col]={{0,0,5,2},{0,0,0,6},{9,0,0,0},{7,0,0,0}};
//     // for(int i=0;i<row;i++){
//     //     for(int j=0;j<col;j++){
//     //         cin>>a[i][j];
//     //     }
//     // }
//     if(checksparse(a)==-1){
//         cout<<"Not sparse Matrix"<<endl;
//     }
//     else{
//         cout<<"It is a Sparse Matrix "<<checksparse(a)<<" Zeros Present in "<<(row*col)<<" Element of Matrix"<<endl;
//     }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
const int row=4;
const int col=4;
const int mx=10;
int main(){

    int a[row][col]={{0,0,5,2},{0,0,0,6},{9,0,0,0},{7,0,0,0}};
    int i,j,count=0;
    cout<<"Original Matrix :"<<endl;
    for( i=0;i<row;i++){
        for( j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    int sparse[mx][3];

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
          if(a[i][j]!=0){
              sparse[count][0]=i;
              sparse[count][1]=j;
              sparse[count][2]=a[i][j];
              count++;
          }
        }
    }


    cout<<endl<<"Sparse Matrix :"<<endl;
    cout<<"Row "<<"col "<<"Value"<<endl;
    for(i=0;i<count;i++){
        cout<<sparse[i][0]<<"    "<<sparse[i][1]<<"    "<<sparse[i][2]<<endl;
    }cout<<endl;
return 0;
}