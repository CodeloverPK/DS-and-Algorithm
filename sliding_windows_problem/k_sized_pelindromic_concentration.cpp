#include<bits/stdc++.h>
using namespace std;

bool ispelindrom(int n){
    int temp=n,reverse=0;
    while(n>0){
        int rem=n%10;
        reverse=reverse*10 + rem;
        n=n/10;
    }
    if(reverse==temp){
        return true;
    }
    return false;
}
int pelindromic(vector<int>v ,int k){

        int num=0;
        for(int i=0;i<k;i++){
            num=num*10+v[i];
        }
        if(ispelindrom(num)){
            return 0;
        }    
        for(int i=k;i<v.size();i++){
            num=num%(int)(pow(10,k-1)) * 10 + v[i];  //  sliding aprpach
            if(ispelindrom(num)){
                return i-k+1;
            }    
        }
return -1;
}   
int main(){
    vector<int>v={2,3,5,1,1,5};
    int k=4;
    int idx=pelindromic(v,k);
    if(idx==-1){
        cout<<"Such subarray doesn't exist"<<endl;
    }else{
        for(int i=idx;i<idx+k;i++){
            cout<<v[i];
        }
    }
    cout<<"\n";
return 0;
}