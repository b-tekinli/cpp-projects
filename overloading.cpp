#include <iostream>
using namespace std;

void ortHesapla(int sayi1, int sayi2) {
    int result = (sayi1 + sayi2) / 2;

    cout << "Ortalama: " << result << endl;
}

void ortHesapla(int sayi1, int sayi2, int sayi3) {
    int result = (sayi1 + sayi2 + sayi3) / 3;

    cout << "Ortalama: " << result << endl;
}

void ortHesapla(double sayi1, double sayi2) {
    int result = (sayi1 + sayi2) / 2;

    cout << "Ortalama: " << result << endl;
}

int main() {
    int sayi1, sayi2, sayi3;
    double num1, num2;

    cout << "Giris yapiniz: " << endl;
    cin >> sayi1 >> sayi2 >> sayi3;
    cin >> num1 >> num2;

    ortHesapla(sayi1, sayi2);
    ortHesapla(sayi1, sayi2, sayi3);
    ortHesapla(num1, num2);
}
