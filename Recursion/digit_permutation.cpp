// //Given an array nums of distinct integers return all possible permutation....
// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int>> ans;
// void permute(vector<int>&a ,int idx){
//     if(idx==a.size())
//     {
//         ans.push_back(a);
//         return;
//     }
//     for(int i=idx;i<a.size();i++){
//         swap(a[i],a[idx]);
//         permute(a,idx+1);
//         swap(a[i],a[idx]);
//     }
//     return ;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(auto &i:a){
//         cin>>i;
//     }
//     permute(a,0);
//     for(auto i:ans){
//         for(auto j:i){
//             cout<<j<<" ";
//         }cout<<"\n";   
//     }
// return 0;
// }


// same thing using STL.....

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &i:v){
        cin>>i;
    }
    vector<vector<int>> ans;
    sort(v.begin(),v.end());
    do{
        ans.push_back(v);
    }while(next_permutation(v.begin(),v.end()));

    // for(auto i:ans){
    //     for(auto j:i){
    //         cout<<j<<" ";
    //     }cout<<endl;
    // }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
return 0;
}

// //Given an array nums of integers may be duplicate , return all possible permutation....

// #include<bits/stdc++.h>
// using namespace std;

// void helper(vector<int>a,vector<vector<int>>&ans,int idx){
//     if(idx==a.size()){
//         ans.push_back(a);
//         return;
//     }
//     for(int i=idx;i<a.size();i++){
//         if(i!=idx&&a[i]==a[idx])
//             continue;
//         swap(a[i],a[idx]);
//         helper(a,ans,idx+1);    
//     }
// }
// vector<vector<int>> permute(vector<int>&nums,int idx){
//     vector<vector<int>> ans;
//     sort(nums.begin(),nums.end());
//     helper(nums,ans,0);
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(auto &i:a){
//         cin>>i;
//     }
//     vector<vector<int>> res=permute(a,0);
//     for(auto i:res){
//         for(auto j:i){
//             cout<<j<<" ";
//         }cout<<endl;
//     }
// return 0;
// }
