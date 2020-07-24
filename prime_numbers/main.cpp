#include <iostream>
#include<stdlib.h>
using namespace std;

class prime
{
public:
    int c=0,i;
    void check_prime(int n)
    {
        if (n==1)
        {
            cout<<"1 is neither composite nor prime";
            exit(0);
        }
        for(i=1;i<=n;i++)
        {
          if(n%i==0)
          {
              c++;
          }
        }
        if(c==2)
        {
            cout<<n<<" is prime";
        }
        else
        {
            cout<<n<<" is composite";
        }
    }
};

int main()
{
    prime obj;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    obj.check_prime(n);
    return 0;
}
