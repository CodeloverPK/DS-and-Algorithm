
// print number....

// #include<bits/stdc++.h>
// using namespace std;
// void printnumber(int n){
//     if(n==1){
//         cout<<n<<" ";
//         return;
//     }
//     printnumber(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     printnumber(n);
// return 0;
// }

// sum of natural number.......


// #include<bits/stdc++.h>
// using namespace std;

// int  sum(int n){

//     if(n==0){
//         return 0;
//     }

//     return( n+sum(n-1) );
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=sum(n);
//     cout<<ans<<endl;
// return 0;
// }

// factorial .....



// #include<bits/stdc++.h>
// using namespace std;
// int fact(int n){

//     if(n==0){
//         return 1;
//     }
//     return (n*fact(n-1));
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n)<<endl;
// return 0;
// }



// febacci series till n;

// #include<bits/stdc++.h>
// using namespace std;

// void fibanacci(int n,int first,int second){
//     if(n==0){
//         return ;
//     }
//     int sum=first+second;
//     cout<<sum<<" ";
//     fibanacci(n-1,second,sum);
// }
// int main(){
//     int n;
//     cin>>n;
//     int first=0;
//     int second =1;
//     cout<<first<<" "<<second<<" ";
//     fibanacci(n-2,0,1);
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int first=0;
//     int second=1;

//     cout<<first<<" "<<second<<" ";

//   while(n-2){
//     int sum=first+second;
//     cout<<sum<<" ";
//     first=second;
//     second=sum;
//       n--;
//   }
// return 0;
// }



// calculate x^n ....... O(n)

// #include<bits/stdc++.h>
// using namespace std;

// int power(int x,int n){
//     if(x==0){
//         return 0;
//     }
//     if(n==0){
//         return 1;
//     }
//     return (x*power(x,n-1));
// }
// int main(){
//     int base,idx;
//     cin>>base>>idx;
//     cout<<power(base,idx)<<endl;
// return 0;
// }


// optimised approach .....  O(log n) 


#include<bits/stdc++.h>
using namespace std;

int power(int x,int n){
    if(x==0){
        return 0;
    }
    if(n==0){
        return 1;
    }
  
    // return ( (x%2==0)?(power(x,n/2) * power(x,n/2)) : (x * power(x,n/2) * power(x,n/2)) ) ;

    if(n%2==0){
        return  ( power(x,n/2) * power(x,n/2) );
    }
    else{
        return ( x*power(x,n/2) * power(x,n/2) ) ;
    }
}
int main(){
    int base,idx;
    cin>>base>>idx;
    cout<<power(base,idx)<<endl;
return 0;
}
