#include<bits/stdc++.h>
using namespace std;



int main()
{
    // string str(4,'A');
    // cout<<s1<<endl;

    // string s1="Anjali";
    // string s2=" Pal";
    // cout<<(s1+s2)<<endl;
    // s1.append(s2);
    // cout<<s1<<endl;

    // s1.clear();
    // cout<<s1<<endl;


    // string exp="abcdefghijklmnopqrstuvwxyz";   
    // exp.erase(3,20);
    // cout<<exp<<endl;
    string exp="abcdefghijklmnopqrstuvwxyz";
    // transform(exp.begin(),exp.end(),exp.begin(),::toupper);
    // cout<<exp<<endl;
    cout<<exp.find("bcd")<<endl;

    exp.insert(2,"RAM");//Insertion in string 
    cout<<exp<<endl;

    cout<<exp.substr(2,3)<<endl;//substring of string 


    string s1="50";
    int x=stoi(s1);//string to int 
    cout<<(x+10)<<endl;

    int y=20;
    cout<<to_string(y)+" 2"<<endl;

return 0;
}


