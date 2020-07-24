#include<iostream>
#include<conio.h>
using namespace std;
class country
{
    public:
    country()
    {
        cout<<"\n Constructor called \n";
    }
    ~country()
    {
        cout<<"\n Destructor called \n";
    }
    void setNumOfCities(int num)
    {
        num_of_cities = num;
    }
    int getNumOfCities(void)
    {
        return num_of_cities;
    }
    private:
    int num_of_cities;

};
int main(void)
{
    country obj;
    int num;
    cout<<"Enter a number of cities in your state: ";
    cin>>num;
    obj.setNumOfCities(num);
    num = obj.getNumOfCities();
    cout<<"\n Number of cities is equal to "<<num;
    cout<<"\n----------------------------------------------------------\n\nName:- Akash Shiva\n\n";
    getch();
    return 0;
}
