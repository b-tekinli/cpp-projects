#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outStream;
    outStream.open("a.txt");

    string isim;
    cout << "Adinizi giriniz: ";
    cin >> isim;

    int yas;
    cout << "Yasinizi giriniz: ";
    cin >> yas;

    outStream << "Kullanici ismi: " << isim << endl
    << "Kullanici yasi: " << yas << endl;

    outStream.close();

    return (0);
}
