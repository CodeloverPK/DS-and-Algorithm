// //************************* unique number , when all are twice.*******************************


// // #include<bits/stdc++.h>
// // using namespace std;

// // 
// // void unique(int a[],int n){
// //     int xorsum=0;
// //     for(int i=0;i<n;i++){
// //         xorsum=xorsum^a[i];
// //     }
// //     cout<<xorsum<<endl;
// // }

// // int main()
// // {
// //     int a[]={2,4,6,9,6,4,2};
// //     unique(a,7);

// // return 0;
// // }


// // ************************** Two unique number , when all are twice.****************************************

// // #include<bits/stdc++.h>
// // using namespace std;

// // int checkbit(int n,int pos){
// //     return((n&(1<<pos))!=0);
// // }

// // void twounique(int a[],int n){
// //     int xorsum=0;
// //     for(int i=0;i<n;i++){
// //         xorsum=xorsum^a[i];
// //     }
// //    int tempxor=xorsum;
// //    //now get rightmost bit..
// //    int setbit=0,pos=0;
// //    while(setbit!=1){
// //        setbit=xorsum&1;
// //        pos++;                // rightmost bit position.
// //        xorsum=xorsum>>1;
// //    }

// //    int newxor=0;
// //    for(int i=0;i<n;i++){
// //        if((checkbit(a[i],pos-1))){
// //            newxor=newxor^a[i];
// //        }
// //    }
// //    cout<<newxor<<endl;
// //    cout<<(newxor^tempxor)<<endl;
// // }

// // int main()
// // {
// //     int a[]={2,4,6,9,1,6,4,2};
// //     twounique(a,8);
// // return 0;
// // }



// // *************************** unique number , when all are thrice.**************************
// #include<bits/stdc++.h>
// using namespace std;

// bool getbit(int n,int pos){
//     return ((n&(1<<pos))!=0);
// }
// int setbit(int n,int pos){
//     return(n|(1<<pos));
// }

// int  unique(int a[],int n){
//     int result=0;

//     for(int i=0;i<64;i++){
//         int sum=0;
//         for(int j=0;j<n;j++){
//             if(getbit(a[j],i)){
//                 sum++;
//             }
//         }
//         if((sum%3)!=0){
//             result=setbit(result,i);
//         }
//     }
//     return result;

// }
// int main()
// {
//     int a[]={1,2,40,3,3,2,1,3,2,1};
//     cout<<unique(a,10)<<endl;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int unique(int a[],int n){
//     int xorsum=0;
//     for(int i=0;i<n;i++){
//         xorsum=xorsum^a[i];
//     }
//     return xorsum;
// }
// int main(){
//     int a[]={2,4,3,5,6,2,3,5,4};
//     cout<<unique(a,7)<<endl;
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;

bool checkbit(int a,int pos){
        return (a&(1<<pos));
}

void unique(int a[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^a[i];
    }
    int temp=xorsum;

    int pos=0;
    int setbit=0;

    while(setbit!=1){
        setbit=xorsum&1; // LSB  1 hai ki nii  wahi pane ki kosis hai yaha  hhhhmmm
        pos++;  //  dhyan rahe jaha pr rightmost bit set hua milega xorsum me usase ek position aage jaoge yaha se,
        xorsum=xorsum>>1; //  LSB  hr ek step me pane ke liye 
    }

    int newxorsum=0;
    for(int i=0;i<n;i++){
        if(checkbit(a[i],pos-1)){
            newxorsum=newxorsum^a[i];
        }
    }

    cout<<newxorsum<<endl;
    cout<<(temp^newxorsum)<<endl;

}
int main(){
    int a[]={2,4,6,7,4,5,6,2};
    unique(a,8);
return 0;
}