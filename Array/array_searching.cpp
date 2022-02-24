#include<bits/stdc++.h>
using namespace std;

int Linearsearch(int a[],int key,int n){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
return -1;
}
int binarysearchkey(int a[],int key,int n){
            int s=0;
            int e=n-1;
            while(s<=e){
                int mid=(s+e)/2;
                if(a[mid]==key){
                    return mid;
                }
                else if(a[mid]>key){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
return -1;               
}

int main()
{
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      int key;
      cin>>key;

    //   cout<<Linearsearch(a,key,n)<<endl;  o(n)
      cout<<binarysearchkey(a,key,n)<<endl;///only for sorted array. O (long n)

return 0;
}