#include<bits/stdc++.h>
using namespace std;

class calculateBill{
     public:
     void Bill(){
        cout<<"Total bill is calculated"<<endl;
     }
};

class sendmail{
    public:
    void send(){
        cout<<"Mail is send"<<endl;
    }
};

class order{
   private:
   calculateBill c;
   sendmail s;
   public:
   void database(){
    cout<<"Save to database"<<endl;
   }
   void result(){
    database();
    c.Bill();
    s.send();
   }
};

int main(){
    order o;
    o.result();
}