// #include<bits/stdc++.h>
// using namespace std;

// bool isSafe(int **arr, int x,int y,int n){
//     if(x<n&&y<n&&arr[x][y]==1){
//         return true;
//     }
//     return false;
// }

// bool ratinMaze(int **arr,int x,int y,int n,int **solarr){
//     if(x==(n-1)&&y==(n-1)){
//         solarr[x][y]=1;
//         return true;
//     }
//     if(isSafe(arr,x,y,n)){
//         solarr[x][y]=1;
//         if(ratinMaze(arr,x+1,y,n,solarr)){
//             return true;
//         }
//         if(ratinMaze(arr,x,y+1,n,solarr)){
//             return true;
//         }
//         solarr[x][y]=0; // Backtracking
//         return false;
//     }
// return false;
// }

// int main()
// {
//     int n;
//     cin>>n;

//     int **arr=new int *[n];
//     for(int i=0;i<n;i++){
//         arr[i]=new int[n];
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }

//     int **solarr=new int *[n];
//     for(int i=0;i<n;i++){
//         solarr[i]=new int[n];
//         for(int j=0;j<n;j++){
//             solarr[i][j]=0;
//         }
//     }

//     bool t=ratinMaze(arr,0,0,n,solarr);

//     if(t==true){
       
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cout<<solarr[i][j]<<" ";
//             }cout<<endl;
//         }
//     }

// return 0;
// }




#include<bits/stdc++.h>
using namespace std;

bool isSafe(int **a,int x,int y,int n){
        if(x<n&&y<n&&a[x][y]==1){
            return true;
        }
    return false;
}

bool rateinMaze(int **a,int x,int y,int n,int **sol){
    if(x==n-1||y==n-1){
        sol[x][y]=1;
        return true;
    }
    if(isSafe(a,x,y,n)){
        sol[x][y]=1;
        if(rateinMaze(a,x+1,y,n,sol)){
            return true;
        }
        if(rateinMaze(a,x,y+1,n,sol)){
            return true;
        }
        sol[x][y]=0; // backtrack
    return false;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    int **a=new int*[n];
    for(int i=0;i<n;i++){
        a[i]=new int[n];
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    cout<<endl;
    cout<<"Input Array : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;

    int **sol=new int *[n];
    for(int i=0;i<n;i++){
        sol[i]=new int[n];
        for(int j=0;j<n;j++){
            sol[i][j]=0;
        }
    }
    cout<<"Output Array : "<<endl;
    if(rateinMaze(a,0,0,n,sol)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<sol[i][j]<<" ";
            }cout<<endl;
        }
    }
    cout<<endl;
return 0;
}