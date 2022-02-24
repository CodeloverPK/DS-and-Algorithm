#include<bits/stdc++.h>
using namespace std;

void swap(char *a,char *b){
    char t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    string s="2435126";
    sort(s.begin(),s.end(),greater<int>()); // Descending order sort.
    //Bubble sort
    // for(int i=0;i<s.length();i++){
    //     for(int j=0;j<s.length()-1-i;j++){
    //         if(s[j]<s[j+1]){ //  Descending order sort.
    //             swap(&s[j],&s[j+1]);
    //         }
    //     }
    // }
    // cout<<s<<endl;
    cout<<s<<endl;
return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s="123";
//     int n=stoi(s);
//     cout<<(n+5)<<endl;

//     int N=400;
//     string st=to_string(N);
//     cout<<st+"4"<<endl;
// return 0;
// }