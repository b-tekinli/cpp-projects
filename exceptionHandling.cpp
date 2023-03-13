#include <iostream>
using namespace std;

int main() {
    int bolen, bolunen = 100, sonuc;

    cout << "Kullanici girisi: ";
    cin << bolen;

    try {
        if(bolen == 0) {
            throw 1;
        }
        sonuc = bolunen / bolen;    // problemli bolum
        cout << sonuc;
    }
    catch(int e) {
        cout << "Yanlis giris yaptiniz. 0 girilemez. \n";
    }

    return (0);
}
