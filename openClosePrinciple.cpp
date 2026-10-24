#include<bits/stdc++.h>
using namespace std;

class payment{
     public:
     virtual void pay()=0;
};

class upi : public payment{
     public:
     void pay() override{
        cout<<"pay by upi"<<endl;
     }
};

class card : public payment{
    public:
    void pay() override{
        cout<<"pay by card"<<endl;
    }
};

class netbanking : public payment{
    public:
    void pay() override{
        cout<<"pay by netbanking"<<endl;
    }
};

int main(){
    upi u;
    card c;
    netbanking n;
    u.pay();
    c.pay();
    n.pay();
}

