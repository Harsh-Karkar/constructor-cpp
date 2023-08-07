#include<iostream>
using namespace std;

class box{

    int l,b,h;
    public : 

    void setdata(int x, int y , int z)
    {
        l = x;
        b = y;
        h = z;
    }

    int getdata()
    {
        return l*b*h;
    }

    box operator++(){
        box t;
        t.h = ++h;
        t.b = ++b;
        t.l = ++l;

        return t;
    }

};

int main(){
    box a,b;
    a.setdata(2,3,4);

    cout<<"volume of a is :"<<a.getdata()<<endl;

    
    b = ++a;

    cout<<"volume of box b is : "<<b.getdata()<<endl;
}