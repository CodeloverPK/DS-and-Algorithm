#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int key ;
    cin>>key;
    bool flag =false;
// this is optimised Approach.....

    // int row=0;
    // int col=m-1;

    // while(row<n&&col>=0)
    // {
    //     if(a[row][col]==key){
    //         flag=true;
    //         break;
    //     }
    //     else if(a[row][col]>key){
    //         col--;
    //     }
    //     else{
    //         row++;
    //     }
    // }

// same above code can also be done by this....
    int row=n-1;
    int col=0;

    while(col<n&&row>=0)
    {
        if(a[row][col]==key){
            flag=true;
            break;
        }
        else if(a[row][col]>key){
            row--;
        }
        else{
            col++;
        }
    }
    if(flag){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
return 0;
}