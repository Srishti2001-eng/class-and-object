#include<iostream>
using namespace std;

class Student
{
    int roll;
    char name[20];
    float marks[5];
    float total;

    public:
    void getdata()
    {
        cout<<"Enter the roll no."<<endl;
        cin>>roll;
        cout<<"Enter the name:"<<endl;
        cin>>name;
        cout<<"Enter the marks:"<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }

    }

    void  showdata()
    {
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        total=0;
        for(int i=0;i<5;i++)
        {
            total=total+marks[i];
        }
        cout<<"Total marks is :"<<total<<endl;
    }
    

};

int main()
{
    Student s;
    s.getdata();
    s.showdata();
}