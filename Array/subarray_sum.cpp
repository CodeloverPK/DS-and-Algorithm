// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//         int mxsum=INT_MIN;
//         int sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             sum=0;
//             for(int k=i;k<=j;k++){
//                 sum+=a[k];
//                 cout<<a[k]<<" ";
//             }cout<<endl; //cout<<" sum = "<<sum<<endl;
//         }
//         mxsum=max(mxsum,sum);
//     }
//     cout<<mxsum<<endl;
//     return 0;
// }





// optimised Approach ............... o(n)  wow hahhahahah


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

        int mxsum=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(a[i]<=0){
                sum=0;
            }
            mxsum=max(mxsum,sum);
        }
    cout<<mxsum<<endl;
    return 0;
}
