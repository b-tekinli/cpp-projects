#include <iostream>
using namespace std;

int divide(int bolunen, int bolen) {
    if(bolen == 0) {
        throw 1;
    }
    return bolunen / bolen;
}

int main() {
    int bolen, bolunen = 100, sonuc;

    cout << "Kullanici girisi: ";
    cin << bolen;

    try {
        /*
        if(bolen == 0) {
            throw 1;
        }
        sonuc = bolunen / bolen;    // problemli bolum
        */
       sonuc = divide(bolunen, bolen);
        cout << sonuc;
    }
    catch(int e) {
        cout << "Yanlis giris yaptiniz. 0 girilemez. \n";
    }

    return (0);
}
