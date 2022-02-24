// #include<bits/stdc++.h>
// using namespace std;

// void merg(int a[],int l,int mid,int r){
//         int n1=mid-l+1;
//         int n2=r-mid;
//         int a1[n1];
//         int a2[n2];
//         for(int i=0;i<n1;i++){
//             a1[i]=a[i+l];
//         }
//         for(int i=0;i<n2;i++){
//             a2[i]=a[i+(mid+1)];
//         }
//         int i=0;
//         int j=0;
  
//         int k=l;
//         while(i<n1&&j<n2){
//             if(a1[i]>=a2[j]){
//                 a[k]=a2[j];
//                 k++;j++;
//             }
//             else{
//                 a[k]=a1[i];
//                 k++;i++;
//             }
//         }
//         while(i<n1){
//             a[k]=a1[i];
//             k++;i++;
//         }
//         while(j<n2){
//             a[k]=a2[j];
//             k++;j++;
//         }
//         while(i<n1){
//             a[k]=a1[i];
//             k++;i++;
//         }
//         while(j<n2){
//             a[k]=a2[j];
//             k++;j++;
//         }
// }
// void mergesort(int a[],int l,int r){
//         if(l<r){
//             int mid=(l+r)/2;
//             mergesort(a,l,mid);
//             mergesort(a,mid+1,r);
//             merg(a,l,mid,r);
//         }
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     // int a[]={6,3,9,5,2,8,7,1};
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     mergesort(a,0,n-1);
//     for(int i=0;i<n;i++)
//         cout<<a[i]<<" ";
//     cout<<endl; 
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;

void merg(int a[],int l,int mid,int r){
        int n1=mid-l+1;
        int n2=r-mid;
        int a1[n1+1];
        int a2[n2+1];
        for(int i=0;i<n1;i++){
            a1[i]=a[i+l];
        }
        for(int i=0;i<n2;i++){
            a2[i]=a[i+(mid+1)];
        }
        int i=0;
        int j=0;
        a1[n1]=a2[n2]=INT_MAX;
        for(int k=l;k<=r;k++){
            if(a1[i]>=a2[j]){
                a[k]=a2[j];
                j++;
            }
            else{
                a[k]=a1[i];
                i++;
            }
        }
}
void mergesort(int a[],int l,int r){
            if(l==r) return;
            int mid=(l+r)/2;
            mergesort(a,l,mid);
            mergesort(a,mid+1,r);
            merg(a,l,mid,r);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    // int a[]={6,3,9,5,2,8,7,1};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl; 
return 0;
}




/*
space = O(n)
Time = O(nlogn)      Always
*/