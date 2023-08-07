#include<iostream>
using namespace std;
class square{
    int a;
    protected:
    int b;
    
};

class sqr{
    public:
    void test()
    {}

};
class derived : public square , public sqr
{
    public:
    int getdata()
    {
        int i,n;
        cout<<"enter value n ";
        cin>>n;

        for(i=1
        
        
        ; i<=n; i++)
        {
            cout<<"number : "<<i<<endl;
            cout<<"squre : "<<i*i<<endl;
        }
    }
};   
int main() 
{
    derived m;
    m.test();
    m.getdata();
}