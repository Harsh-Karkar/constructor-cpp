#include<iostream>
using namespace std;

class bank{
    int bal;
    string name;

    public :

    void setdata(int bal , string name)
    {
        this -> bal = bal;
        this ->name = name;
    }

    void getdata()
    {
        cout<<"your name is : "<<name<<endl;
        cout<<"you  balance is : "<<bal<<endl;
    }
};

int main()
{
    bank b;
    b.setdata(15000,"hk");
    b.getdata();
}