#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,2,2,1,1,1,1,3,1};
    int k=2;
    map<int,int> freq;

    for(int i=0;i<v.size();i++){
        int presentsize=freq.size();
        if(freq[v[i]]==0 && presentsize==k){
            break;
        }
        freq[v[i]]++;
    }

    vector<pair<int,int>>ans;
    for(auto it=freq.begin();it!=freq.end();it++){
        if(it->second!=0){
            ans.push_back({it->second,it->first});
            // ans.push_back({it->first,it->second});
        }
    }
    sort(ans.begin(),ans.end(),greater<pair<int,int>>());

// we have to print by Decreasing order's frequency of element 

    for(auto it=ans.begin();it!=ans.end();it++){
        cout<<it->second<<" "<<it->first<<endl;
        // cout<<it->first<<" "<<it->second<<endl;
    }cout<<endl;

return 0;
}