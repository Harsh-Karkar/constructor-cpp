#include<iostream>
using namespace std;

class one{
    
    protected : 
    int i;
    int n;
    public : 

    void get()
    {
        cout<<"enter a number : "<<endl;
        cin>>n;
    }
};

class two : public one
{
    public : 
    void set()
    {
        one :: i,n; 
        for(i=1 ; i<=n; i++)
        {
            cout<<"number : "<<i<<endl;
            cout<<"squre : "<<i*i<<endl;
        }
    }
};

int main()
{
    two t;
    t.get();
    t.set();
}

