// #include<bits/stdc++.h>
// using namespace std;

// int countpathmaze(int n,int i,int j){
//     if(i==n-1 && j==n-1){
//         return 1;
//     }
//     if(i>=n || j>=n){
//         return 0;
//     }
//     return ( countpathmaze(n,i+1,j) + countpathmaze(n,i,j+1));
// }

// int main()
// {
//     cout<<countpathmaze(3,0,0)<<endl;
// return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int pathMaze(int n,int i,int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n&&j>=n){
        return 0;
    }
    int count=0;
    if(i<n&&j<n){
        count+=pathMaze(n,i+1,j)+pathMaze(n,i,j+1);
    }
return count;
}
int main(){
    cout<<pathMaze(3,0,0)<<endl;
return 0;
}