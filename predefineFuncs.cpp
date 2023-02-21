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
    // rand     --> rastgele sayilar uretir.
    
    // 1 - 90 arasinda 5 tane sayi uretelim.
    
    cout << "Sayilar: ";
    int i = 1;
    
    while(i <= 5) {
        cout << rand() % 91 << " ";
        i++;
    }
    
    
    exit(0);

    cout << "sonlandirildi !" << endl;
}
