#include<iostream>

using namespace std;

class A
{
    friend int sq(A,B);
};
class B
{
    friend int sq(A,B);
};
int sq(A obj,B obj)
{
    int sq(A obj,B obj);
}

