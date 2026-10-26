#include<bits/stdc++.h>
using namespace std;

class database{
    public:
    virtual void save()=0;
};


class mongodb : public database{
     public:
     void save() override{
        cout<<"save to mongodb"<<endl;
     }
};

class mysql : public database{
    public:
    void save() override{
        cout<<"save to mysql"<<endl;
    }
};

class order{
    database* d;
    public:
    order(database* t){
        d=t;
    }
    void ord(){
        d->save();
    }
};

int main(){
    mongodb m;
    mysql s;

    order o(&m);
    o.ord();

    order o1(&s);
    o1.ord();
}