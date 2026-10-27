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

class checkout{
    private:
    payment* p;
    public:
    checkout(payment* p1){
        p=p1;
    }
    void check(){
        p->pay();
    }
};


int main(){
    upi u;
    card c;
     checkout ch(&u);
     ch.check();

     checkout ch2(&c);
     ch2.check();
}