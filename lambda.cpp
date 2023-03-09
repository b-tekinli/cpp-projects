#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print() {
    cout << "Merhaba Dunya" << endl;
}

// lambda ornek : [cc](p){fb}

int main() {
    auto printL = []() { cout << "Merhaba Dunya" << endl; };

    printL();

    return (0);
}
