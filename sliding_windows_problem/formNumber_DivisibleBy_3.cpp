#include<bits/stdc++.h>
using namespace std;

void subarray_divibleBy3(vector<int>v ,int k){
        pair<int,int> ans;
        bool found=false;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=v[i];
        }    
        if(sum%3==0){
            ans=make_pair(0,k-1);
            found=true;
        }
        for(int i=k;i<v.size();i++){
            if(found){
                break;
            }
            sum=sum+v[i]-v[i-k]; //  sliding aproach.
            if(sum%3==0){
                ans=make_pair(i-k+1,i);
                found =true;
            }
        }
        if(!found){
            ans=make_pair(-1,0);
        }
        if(ans.first==-1){
            cout<<"No such subarray exist here"<<endl;
        }else{
            for(int i=ans.first;i<=ans.second;i++){
                cout<<v[i];
            }
        }

}   
int main(){
    vector<int>v={8,23,45,12,56,4};
    int k=3;
    subarray_divibleBy3(v,k);
    cout<<"\n";
return 0;
}