#include <iostream>
using namespace std;

int main() {
    int dogumYili;
    int mevcutYil = 2023;

    cout << "Dogdugunuz yili giriniz: ";
    cin >> dogumYili;

    int sonuc = mevcutYil - dogumYili;

    cout << "Yasiniz: " << sonuc << endl;


    return (0);
}