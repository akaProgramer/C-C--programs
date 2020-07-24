#include<iostream>
#include<conio.h>
using namespace std;
class Person
{
     int id;
     char name[200];

     public:
          void accept_person_details()
          {
               cout<<"\n -------------------------------------------------- \n";
               cout<<"\n Enter Id               :  ";
               cin>>id;
               cout<<"\n Enter Name             :  ";
               cin>>name;
          }
          void display_person_details()
          {
               cout<<"\n -------------------------------------------------- \n";
               cout<<"\n Id                     :  "<<id;
               cout<<"\n Name                   :  "<<name;
          }
};
class Teaching : public Person
{
     char subject_name[100];
     char teacher_name[200];

     public:
          void accept_teacher_details()
          {
               accept_person_details();
               cout<<"\n Enter Subject Name     :  ";
               cin>>subject_name;
               cout<<"\n Enter Teacher Name     :  ";
               cin>>teacher_name;
          }
          void display_teacher_details()
          {
               display_person_details();
               cout<<"\n Subject Name           :  "<<subject_name;
               cout<<"\n Teacher Name           :  "<<teacher_name;
          }
};
class NonTeaching : public Person
{
     char dept_name[200];

     public:
          void accept_nonteaching_details()
          {
               cout<<"\n Enter Department Name  :  ";
               cin>>dept_name;
          }
          void display_nonteaching_details()
          {
               cout<<"\n Department Name        :  "<<dept_name;
          }
};
class Instructor : public NonTeaching, public Teaching
{
     public:
          void accept_instructor_details()
          {
               accept_teacher_details();
               accept_nonteaching_details();
          }
          void display_instructor_details()
          {
               display_teacher_details();
               display_nonteaching_details();
          }
};
int main()
{
     Instructor *inst;
     int cnt, i;
     cout<<"\n Enter No. of Instructor Details You Want?  :  ";
     cin>>cnt;
     inst=new Instructor[cnt];
     for(i=0; i<cnt; i++)
     {
          inst[i].accept_instructor_details();
     }
     for(i=0; i<cnt; i++)
     {
          inst[i].display_instructor_details();
     }
     cout<<"\n----------------------------------------------------------\n\nName:- Akash Shiva\n\n";
     return 0;
}
