#include <iostream>
using namespace std;

namespace myNamespace {
    int a = 42;

    void myFunction() {
        cout << "Hello World!" << endl;
    }
}

using namespace myNamespace;        // burada myNamespace'i import etmezsek main fonksiyonu icinde a ve myFunction fonk. kullanamayız.

int main() {
    cout << a << endl;

    myFunction();

    return (0);
}
