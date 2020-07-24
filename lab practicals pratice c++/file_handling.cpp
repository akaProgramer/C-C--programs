#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("new",ios::out);
    if(!new_file)
    {
         cout<<"File not created";
    }
    else
    {
        cout<<"new file created";
        new_file.close();
    }
}
