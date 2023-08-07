#include<iostream>
using namespace std;
class factorial{
    int a;
    public:
    void test()
    {}

};
class name{
    public:
    int value;
    void get()
    {
    cout<<"ENter any number ";
        cin>>value;
    }

};
class derived : public factorial , protected name   // protected name ni badle public name hoi to 
{
    public:
    int getdata()
    {
        name :: get () ;                               // name :: get (); no lakhavu pade and 
        int fact=1,i;

      //  cout<<"ENter any number ";                    // a line ne hu class name ma laigayo chu atle com. mari che 
      //  cin>>value;
         for(i=1;i<=value;i++)
        {    
         fact=fact*i;    
        }    
  cout<<"Factorial of " <<value<<" is: "<<fact<<endl;  
    }    
};
int main()
{
    derived m;
   // m. get();                                 // m. get(); jo publuic hoi to lakhavu pade 
    m.getdata();
    m.test();
}