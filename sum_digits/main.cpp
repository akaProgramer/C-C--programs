#include <iostream>

using namespace std;

class sum_digits
{
    int x=0;
public:
    int sum(int n)
    {
        while(n>0)
        {
            x=(n%10)+x;
            n=n/10;
        }
        return x;
    }

};

int main()
{
    sum_digits obj;
    int n,sum;
    cout<<"Enter a number for sum of its digits: ";
    cin>>n;
    sum=obj.sum(n);
    cout<<"sum of digits of "<<n<<" is "<<sum;
    return 0;
}
