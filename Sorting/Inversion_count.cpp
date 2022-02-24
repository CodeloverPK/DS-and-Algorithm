
#include <bits/stdc++.h>
using namespace std;
long long  merg(int a[], int l, int mid, int r)
{
    long long inv=0;

    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a1[n1+1];
    int a2[n2+1];
    for (int i = 0; i < n1; i++)
    {
        a1[i] = a[i + l];
    }
    for (int i = 0; i < n2; i++)
    {
        a2[i] = a[i + (mid + 1)];
    }
    int i = 0;
    int j = 0;
    a1[n1]=a2[n2]=INT_MAX;
    for(int k=l;k<=r;k++){
        if(a1[i]<=a2[j]){
            a[k]=a1[i];
            i++;
        }
        else{
            a[k]=a2[j];
            j++;
            inv+=(n1-i);   //  Analyis karo yaar ...
        }
    }
return inv ;    
}
long long  mergesort(int a[], int l, int r)
{
    long long inv=0;
    if (l< r){

        int mid = (l + r) / 2;
        inv+=mergesort(a, l, mid);
        inv+=mergesort(a, mid + 1, r);
        inv+=merg(a, l, mid, r);
    }

return inv;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    // int a[]={6,3,9,5,2,8,7,1};
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout<<mergesort(a, 0, n - 1)<<endl;;

    return 0;
}




//Using for loop........

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int &i:a){
        cin>>i;
    }
    int ct=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                ct++;
            }
        }
    }
    cout<<ct<<endl;
return 0;
}