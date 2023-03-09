#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int print(int a, int b) {
    cout << "Merhaba Dunya" << endl << (a + b);

    return a + b;
}

// lambda ornek : [cc](p){fb}

int main() {
    // auto printL = []() { cout << "Merhaba Dunya" << endl; };
    
    auto printL = [](int a, int b)->int { return a + b; };
    cout << printL(5, 5);

    // printL();

    return (0);
}
