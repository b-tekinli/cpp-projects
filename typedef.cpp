#include <iostream>
#include <type_traits>
using namespace std;

typedef int myInt;
typedef unsigned int uInt32;    // unsigned int cok uzun olduğundan kısaltabiliriz.

int main() {

    int x = 0;
    myInt y = 11;


    cout << "x = " << x << endl;
    cout << "y = " << y << endl;



    uInt32 a = 5;
    cout << "a data type: " << typeid(a).name() << endl;

    if (is_same<decltype(a), unsigned int>::value) {
        cout << "a, unsigned int turunde" << endl;
    }

    return (0);
}
