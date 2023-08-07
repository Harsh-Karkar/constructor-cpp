#include<iostream>
using namespace std;

class base{

    int a; //private

    protected :

    int b;

    public :

    void hello()
    {
        cout<<"hello .... .... ...."<<endl;
    }
};

class derived : public base
{
    public :
    void test()
    {
        base :: b =10;
        cout<<"hello world ::::: :::: :::::"<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main()
{
    derived d;
    d.hello();
    d.test();
}