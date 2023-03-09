#include <iostream>
using namespace std;

enum gun {pazartesi = 1, sali, carsamba, persembe, cuma, cumartesi = 8, pazar};
enum bolum {bilgisayar, elektronik, endustri, mekatronik, makine};

int main() {
    int x;
    gun g1, g2, g3;

    g1 = pazartesi;
    g2 = persembe;
    g3 = pazar;

    cout << g1 << endl;
    cout << g2 << endl;
    cout << g3 << endl;

    
    bolum b1, b2;

    b1 = bilgisayar;
    b2 = endustri;

    cout << b1 << endl;     // değer atanmadığında default olarak 0 alır.
    cout << b2 << endl;

    return (0);
}