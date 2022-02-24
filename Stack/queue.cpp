#include<bits/stdc++.h>
using namespace std;

#define MX 10
int q[MX];
int front=0;
int rear=0;
class QUEUE{
    public:
        void insert(int item){
            rear=(rear+1)%10;
            if(rear==front){
                cout<<"Overflow"<<endl;
                return;
            }
            q[rear]=item;
        }
        void del(){
            int item;
            if(front==rear){
                cout<<"Underflow"<<endl;
                return;
            }
            front=(front+1)%10;
            item=q[front];
            cout<<item<<" Deleted from Queue"<<endl;
        }

};
int main(){
    QUEUE Q;
    Q.insert(10);
    Q.insert(20);
    Q.insert(20);
    Q.insert(20);
    Q.insert(20);
    Q.insert(20);
    Q.insert(20);
    Q.insert(20);
    Q.insert(20);
    // Q.del();
    Q.insert(20);

    // Q.del();
    // Q.del();
    // Q.del();
return 0;
}