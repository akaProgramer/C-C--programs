#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
class student
{
private:
    string name,course,add;
    int roll,age;
    char gen;
public:
    void read()
    {
        cout<<"Enter the details of Student:\n";
        cout<<"Enter your name: ";
        getline(cin,name);
        fflush(stdin);
        cout<<"Enter your course name in short: ";
        getline(cin,course);
        fflush(stdin);
        cout<<"Enter your roll no.: ";
        cin>>roll;
        fflush(stdin);
        cout<<"Enter your age: ";
        cin>>age;
        fflush(stdin);
        cout<<"Enter your address: ";
        getline(cin,add);
        fflush(stdin);
    }
    void show()
    {
        cout<<"\n--------------------- Student entered details: ---------------------\n";
        cout<<"Name: "<<name;
        cout<<"\nCourse: "<<course;
        cout<<"\nRoll No.: "<<roll;
        cout<<"\nAge: "<<age;
        cout<<"\nAddress: "<<add;
    }
};
int main()
{
    student ob;
    ob.read();
    ob.show();
    return 0;
}
