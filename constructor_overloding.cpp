#include<iostream>

using namespace std;

class Example {
    int a, b;
public:
    Example() {
        a = 50;
        b = 100;
        cout << "\nIm Constructor";
    }

    Example(int x, int y) {
        a = x;
        b = y;
        cout << "\nIm Constructor";
    }

    void Display() {
        cout << "\nValues :" << a << "\t" << b;
    }
};

int main() {
    Example Object(10, 20);
    Example Object2;
    Object.Display();
    Object2.Display();
    cout<<"\n----------------------------------------------------------\n\nName:- Akash Shiva\n\n";
    return 0;
}
