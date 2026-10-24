#include<bits/stdc++.h>
using namespace std;

// class Account{
//     public:
//    virtual void deposit(){
//         cout<<"Amount deposit"<<endl;
//     }
//    virtual void withdraw(){
//         cout<<"Amount withdraw"<<endl;
//     }
// };

// class saving : public Account{

// };
// class fixeddeposit : public Account{
//     public:
//     void withdraw() override {
//     cout<<"cannot with withdrawn"<<endl;
//    }
// };

// int main(){
//     saving s;
//     fixeddeposit f;

//     Account* a;
//     a=&s;
//     a->withdraw();
//     a=&f;
//     a->withdraw();

// }



class BankAccount{
    public:
    virtual void deposit(){
        cout<<"amount deposited"<<endl;
    }
};

class withdraw : public BankAccount{
    public:
    virtual void withdrawn(){
        cout<<"amount witdrawm"<<endl;
    };
};

class saving : public withdraw{

};
class fixedDeposit : public BankAccount{

};

int main(){
    saving s;
    fixedDeposit d;

    BankAccount* b;
    withdraw* w;
    b=&d;
    b->deposit();
    w=&s;
    w->withdrawn();
}



