#include<bits/stdc++.h>
using namespace std;

class twod{
    public:
    virtual int area()=0;
};

class threed{
    public:
    virtual int volume()=0;
};

class square : public twod{
    private:
    int s;
   public:
   square(int t){
    s=t;
   }
   int area() override{
    return s*s;
   }
};

class rectangle : public twod{
    private:
    int a;
    int b;
   public:
   rectangle(int c,int d){
    a=c;
    b=d;
   }
   int area() override{
    return a*b;
   }
};

class cube : public twod , public threed{
    private:
    int s;
    public:
    cube(int a){
        s=a;
    }
    int area() override{
        return s*s;
    }
    int volume() override{
        return s*s*s;
    }
};

int main(){
    square s(3);
    rectangle r(3,4);
    cube c(3);
    

    cout<<s.area()<<endl;
    cout<<r.area()<<endl;
    cout<<c.area()<<endl;
    cout<<c.volume()<<endl;
}