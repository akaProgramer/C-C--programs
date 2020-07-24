#include <iostream>
#include <conio.h>
using namespace std;
// first name space
namespace first_space {
   void func() {
      cout << "Inside first_space" << endl;
   }
}
// second name space
namespace second_space {
   void func() {
      cout << "Inside second_space" << endl;
   }
}
using namespace first_space;
int main () {
   // This calls function from first name space.
   func();
   cout<<"\n----------------------------------------------------------\n\nName:- Akash Shiva\n\n";
   getch();
   return 0;
}
