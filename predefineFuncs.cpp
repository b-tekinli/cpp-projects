#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a = 64;

    cout << a << " sayisinin karekoku: " << sqrt(a) << endl;
    cout << a << " sayisinin ussu: " << pow(a, 2) << endl;

    
    // sqrt     --> karekok alir.
    // pow      --> us alir.
    // exit     --> programi sonlandirir ve kendisinden sonra kod yazilse bile programi sonlandiracagi icin onlari okumaz.

    exit(0);

    cout << "sonlandirildi !" << endl;
}
