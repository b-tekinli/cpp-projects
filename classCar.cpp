#include <iostream>
using namespace std;

class Araba {
    public:
        string marka;
        int yil;
        int km;
        string yakit;
        string renk;
        void arabaBilgisi() {
            cout << "Markasi: " << marka << endl;
            cout << "Yil: " << yil << endl;
            cout << "Km: " << km << endl;
            cout << "Yakit: " << yakit << endl;
            cout << "Renk: " << renk << endl;
            cout << "******************" << endl;
        }
};

int main() {
    Araba a1, a2;

    a1.marka = "Chevrolet";
    a1.yil = 2011;
    a1.km = 213000;
    a1.yakit = "Mazot";
    a1.renk = "Siyah";
    a1.arabaBilgisi();


    a2.marka = "Mercedes";
    a2.yil = 2022;
    a2.km = 106000;
    a2.yakit = "Elektrik";
    a2.renk = "Kirmizi";
    a2.arabaBilgisi();


    a2.marka = "Togg";
    a2.yil = 2023;
    a2.km = 10000;
    a2.yakit = "Elektrik";
    a2.renk = "Gri";
    a2.arabaBilgisi();


    return (0);
}
