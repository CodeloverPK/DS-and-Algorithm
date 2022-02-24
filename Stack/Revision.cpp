// stack using array........

// #include<bits/stdc++.h>
// using namespace std;

// #define MAX 20
// int top=-1;  
// int stac[MAX];
// static int countpush,countpop;

// class stak{
//     int data;
//     public:
//     void push(int );
//     void pop();
//     void Display();
// };
// void stak:: push(int val){

//     if(top!=MAX-1){
//         stac[++top]=val;
//     }
//     else{
//         cout<<"Overflow"<<endl;
//     }
//     countpush++;
// }
// void stak:: pop(){
//     int item;
//     if(top==-1){
//         cout<<"Underflow"<<endl;
//     }
//     else{
//         item=stac[top--];
//     }
//     countpop++;
//     cout<<item<<" Deleted form Stack"<<endl;
// }
// void stak :: Display(){
//     for(int i=0;i<(countpush-countpop);i++){
//         cout<<stac[i]<<" ";
//     }cout<<endl;
// }
// int main(){
//     stak st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(50);
//     st.push(60);

//     st.Display();
    
//     st.pop();
//     st.pop();
    
//     st.Display();
// return 0;
// }

// stack using linked list .....

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next=NULL;
//     }
// };

// class stak{
//     public:
//     node* top=NULL;

//     void push(int item){
//         node* n=new node(item);
//         if(top==NULL){
//             top=n;
//             return;
//         }
//         n->next=top;
//         top=n;
//     }
//     void pop(){
//         if(top==NULL){
//             cout<<"UnderFlow"<<endl;
//             return;
//         }
//         node* todelete=top;
//         top=top->next;
//         delete todelete;
//     }
//     int pik(){
//         if(top==NULL){
//             return -1;
//         }
//         return top->data;
//     }
// };
// int main(){

//     stak st;
//     st.push(10);    
//     st.push(20);    
//     st.push(30);    
//     st.push(40);    
//     st.push(50);    
//     st.pop();
//     cout<<st.pik()<<endl;
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int prec(char ch){
//     if(ch=='^'){
//         return 3;
//     }
//     else if(ch=='*'||ch=='/'){
//         return 2;
//     }
//     else if(ch=='+'||ch=='-'){
//         return 1;
//     }
//     else{
//         return -1;
//     }
// }
// void infix_to_postfix(string s){
//     stack<char>st;
//     string res;

//     for(int i=0;i<s.length();i++){

//         if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
//             res+=s[i];
//         }
//         else if(s[i]=='('){
//             st.push(s[i]);
//         }
//         else if(s[i]==')'){
//             while(!st.empty()&&st.top()!='('){
//                 res+=st.top();
//                 st.pop();
//             }
//             if(!st.empty()){
//                 st.pop();
//             }
//         }
//         else{
//             while(!st.empty()&&(prec(st.top())>prec(s[i]))){
//                 res+=st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
//     }
//         while(!st.empty()){
//                 res+=st.top();
//                 st.pop();            
//         }
//     cout<<res<<endl;
// }
// int main(){
//     string str="a+b*c";
//     infix_to_postfix(str);
// return 0;
// }

// infix to prefix......

// #include<bits/stdc++.h>
// using namespace std;

// int prec(char c){
//     if(c=='^'){
//         return 3;
//     }
//     else if(c=='*'|| c=='/'){
//         return 2;
//     }
//     else if(c=='+'||c=='-'){
//         return 1;
//     }
//     else{
//         return -1;
//     }
// }
// string infix_to_prefix(string s){
//     reverse(s.begin(),s.end());
//     stack<char>st;
//     string res;


//     for(int i=0;i<s.length();i++){

//         if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&& s[i]<='Z')){
//             res+=s[i];
//         }
//         else if(s[i]==')'){
//             st.push(s[i]);
//         }
//         else if(s[i]=='('){
//             while(!st.empty()&&st.top()!=')'){
//                 res+=st.top();
//                 st.pop();
//             }
//             if(!st.empty()){
//                 st.pop();
//             }
//         }
//         else{
//             while((!st.empty())&&prec(st.top())>=prec(s[i])){
//                 res+=st.top();
//                 st.pop();

//             }
//             st.push(s[i]);
//         }
//     }
//         while(!st.empty()){
//                 res+=st.top();
//                 st.pop();   
//         }
//     reverse(res.begin(),res.end());
//     return res;
// }
// int main(){
//     string str="(a-b/c)*(a/k-l)";
//     cout<<infix_to_prefix(str)<<endl;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int prefix_evolution(string s){
//     stack<char>st;
//     for(int i=s.length()-1;i>=0;i--){
//         if(s[i]>='0'&& s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//         else{
//             int oprand1=st.top();
//             st.pop();
            
//             int oprand2=st.top();
//             st.pop();
//              switch (s[i])
//              {
//              case '+':
//                  st.push(oprand1+oprand2);
//                  break;
             
//              case '-':
//                  st.push(oprand1-oprand2);
//                  break;
             
//              case '*':
//                  st.push(oprand1*oprand2);
//                  break;
             
//              case '/':
//                  st.push(oprand1/oprand2);
//                  break;
             
//              case '^':
//                  st.push(pow(oprand1,oprand2));
//                  break;
//              }
//         }
//     }
//     return st.top();
// }  
// int main(){
//     cout<<prefix_evolution("-+7*45+20")<<endl;
// return 0;
// }


//balanace paranthesis ....

// #include<bits/stdc++.h>
// using namespace std;
// bool valid(string s){
//     stack<char>st;
//     char ans=true;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='{'||s[i]=='['||s[i]=='('){
//             st.push(s[i]);
//         }
//         else if(s[i]=='}'){
//             if(!st.empty()&&st.top()=='{'){
//                 st.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//         else if(s[i]==')'){
//             if(!st.empty()&&st.top()=='('){
//                 st.pop();
//             }
//             else{
//                 ans= false;
//                 break;
//             }
//         }
//         else if(s[i]==']'){
//             if(!st.empty()&&st.top()=='['){
//                 st.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//     }
//     if(!st.empty()){
//         ans=false;
//     }
// return ans;
// }  
// int main(){
//     cout<<valid("{[()]}")<<endl;
//     cout<<valid("[{()]}")<<endl;
// return 0;
// }