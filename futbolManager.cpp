#include <iostream>
using namespace std;

struct futbolcu {
    string isim;
    int pasYetenegi;
    int sutYetenegi;
    int savunma;
    int hiz;
};

void oyuncuYarat(futbolcu &obj, string isim, int pas, int sut, int savunma, int hiz) {
    obj.isim = isim;
    obj.pasYetenegi = pas;
    obj.sutYetenegi = sut;
    obj.savunma = savunma;
    obj.hiz = hiz;
}

void oyuncuBilgileriniYazdir(futbolcu obj) {
    cout << "Ad: " << obj.isim << endl;
    cout << "Pas yetenegi: " << obj.pasYetenegi << endl;
    cout << "Sut yetenegi: " << obj.sutYetenegi << endl;
    cout << "Hiz: " << obj.hiz << endl;
    cout << "****" << endl;
}

int main() {
    futbolcu icardi;
    oyuncuYarat(icardi, "Icardi", 90, 95, 40, 100);
    oyuncuBilgileriniYazdir(icardi);


    futbolcu yusufDemir;
    oyuncuYarat(yusufDemir, "Yusuf", 100, 100, 100, 100);
    oyuncuBilgileriniYazdir(yusufDemir);


    futbolcu zaniolo;
    oyuncuYarat(zaniolo, "Zaniolo", 95, 99, 85, 70);
    oyuncuBilgileriniYazdir(zaniolo);


    futbolcu kerem;
    oyuncuYarat(kerem, "Kerem", 100, 100, 86, 69);
    oyuncuBilgileriniYazdir(kerem);


    futbolcu abdulkerim;
    oyuncuYarat(abdulkerim, "Abdulkerim", 74, 60, 100, 100);
    oyuncuBilgileriniYazdir(abdulkerim);

    return (0);
}
