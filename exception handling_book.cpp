#include <iostream>
using namespace std;
int main( )
{
try
{
throw "DEMO OF EXCEPTION";
}
catch(string E)
{
cout<<"Exception caught="<<E<<endl;
}
cout<<"Continue after catch block"<<endl;
}
