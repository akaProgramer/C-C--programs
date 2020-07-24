#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("new_file",ios::out);
    if(!new_file)
    {
        cout<<"File not created";
    }
    else
    {
        cout<<"New file created";
        new_file.close();
    }
    cout<<"\n----------------------------------------------------------\n\nName:- Akash Shiva\n\n";
    getch();
    return 0;
}
