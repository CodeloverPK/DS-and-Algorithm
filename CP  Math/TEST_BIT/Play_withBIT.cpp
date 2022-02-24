// #include<bits/stdc++.h>
// using namespace std;


// void printbinary(int n){
//     for(int i=7;i>=0;i--){
//         cout<<(1&(n>>i));
//     }cout<<endl;
// }
// int main(){
    
//     // int a=5;
//     // printbinary(a);

//     for(int i=1;i<=5;i++){
//         cout<<i<<endl;
//         printbinary(i);
//         if(1&i){
//             cout<<"Odd"<<endl;
//         }
//         else{
//             cout<<"Even"<<endl;
//         }
//     }cout<<endl;
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;


void printbinary(int n){
    for(int i=7;i>=0;i--){
        cout<<(1&(n>>i));
    }cout<<endl;
}
int main(){
    cout<<endl;
    for(int i='A';i<='D';i++){
        cout<<(char)i<<" ";
        printbinary(i);
        cout<<endl;
    }cout<<endl;


    for(int i='a';i<='d';i++){
        cout<<(char)i<<" ";
        printbinary(i);
        cout<<endl;
    }cout<<endl;


    // char ch1='A';//  5th bit ko set kr do .....
    // char ch2=ch1|(1<<5);

    // printbinary(ch2);
    // cout<<ch2<<endl;


    // char ch1='a';//  5th bit ko Unset kr do .....
    // char ch2=ch1&(~(1<<5));

    // printbinary(ch2);
    // cout<<ch2<<endl;    


    cout<<(1<<5)<<endl;
    printbinary(1<<5);
    
    printbinary(' ');
    cout<<char('A'|(' '))<<endl; //  how easy to convert into lowercase  

    printbinary('_');
    cout<<char('a'&'_')<<endl;
return 0;
}




// // from LSB se ith tk sabhi bits unset karne hai .........

// #include<bits/stdc++.h>
// using namespace std;

// void printBinary(int n){
//     for(int i=7;i>=0;i--){
//         cout<<(1&(n>>i));
//     }cout<<endl;
// }
// int main(){
//     int a=10;
//     printBinary(a);

//     int i=2;
//     int x=a&(~((1<<(i+1))-1));
//     printBinary(x);

// return 0;
// }


// from MSB se ith tk sabhi bits unset karne hai .........

// #include<bits/stdc++.h>
// using namespace std;

// void printBinary(int n){
//     for(int i=7;i>=0;i--){
//         cout<<(1&(n>>i));
//     }cout<<endl;
// }
// int main(){
//     int a=76;
//     printBinary(a);

//     int i=3;
//     int x=a&((1<<(i+1))-1);
//     printBinary(x);

// return 0;
// }