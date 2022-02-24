#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,3,1,3,1,4,1};
    map<int,int>freq;
    for(int i=0;i<v.size();i++){
        freq[v[i]]++;
    }
    // cout<<freq[1]<<endl;
    for(auto it=freq.begin();it!=freq.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }cout<<"\n";
return 0;
}