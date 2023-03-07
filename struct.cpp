#include <iostream>
using namespace std;

struct ulke {
    string isim;
    int nufus;
    string paraBirimi;
    string baskent;
};

int main() {
    ulke turkiye;
    turkiye.isim = "Turkiye";
    turkiye.nufus = 85;
    turkiye.paraBirimi = "TL";
    turkiye.baskent = "Ankara";


    ulke almanya;
    almanya.isim = "Almanya";
    almanya.nufus = 80;
    almanya.paraBirimi = "EURO";
    almanya.baskent = "Berlin";

    cout << "Ulke adi: " << turkiye.isim << "\n";
    cout << "Ulke nufusu: " << turkiye.nufus << "\n";
    cout << "Ulke para birimi: " << turkiye.paraBirimi << "\n";
    cout << "Ulke baskenti: " << turkiye.baskent << "\n";

    cout << "Ulke adi: " << almanya.isim << "\n";
    cout << "Ulke nufusu: " << almanya.nufus << "\n";
    cout << "Ulke para birimi: " << almanya.paraBirimi << "\n";
    cout << "Ulke baskenti: " << almanya.baskent << "\n";

    return (0);
}
