#include<iostream>
using namespace std;

class student
{
    private:
    int i;
    char name[20];
    float mark[3],total,per;

    public:

    student()
    {
        cout<<"enter student name : ";
        cin>>name;
        cout<<"enter mark of 3 subject : ";
        for(i=0; i<3; i++)
        {
            cin>>mark[i];
        }
        total = mark[0] + mark[1] + mark[2];

        per = (total*100)/300;
    }

    void display()
    {
        cout<<"student name : "<<name<<endl;
        for ( i = 0; i < 3; i++)
        {
            cout<<"3 subject mark is : "<<mark[i]<<endl;
        }
        
        cout<<"total is : "<<total<<endl;
        cout<<"per is : "<<per<<endl;
    }

};

int main()
{
    student s;
    s.display();
}