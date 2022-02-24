#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
        int key;
    int a[n][m];
        cin>>key;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Matrix is :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
        bool flag=false;
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==key){
                cout<<(i+1)<<" "<<(j+1)<<endl;
                flag=true;
                break;
            }
        }
    }
    if(flag){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

return 0;
}
