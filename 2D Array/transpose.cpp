// #include <bits/stdc++.h>
// using namespace std;


// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     int a[n][m];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < m; j++)   //  look at here we are swapping just between upper and lower tringualr matrix ...
//         {
//             swap(a[i][j], a[j][i]); //  used inbuilt swap(a,b);   function in C++
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // int trasnpose[n][m];

//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < m; j++)
//     //     {
//     //         trasnpose[i][j] = a[j][i];
//     //     }
//     // }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < m; j++)
//     //     {
//     //         cout << trasnpose[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }


//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter row and column for Square Matrix :"<<endl;
    int row ,col;
    cin>>row>>col;
    int a[row][col];
    cout<<"Please Enter "<<row*col<<" Matrix Elements :"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(a[i][j],a[j][i]);
        }
    }
    cout<<"Transpose of Matrix is "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
return 0;
}