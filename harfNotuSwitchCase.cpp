#include <iostream>
using namespace std;

int main() {
    char harfNotu;
    cout << "Harf notunuzu giriniz: ";
    cin >> harfNotu;

    switch(harfNotu) {
        case 'A':
        case 'a':
            cout << "Mukemmel!" <<  endl;
            break;
        case 'B':
        case 'b':
            cout << "Guzel!" <<  endl;
            break;
        case 'C':
        case 'c':
            cout << "Idare eder!" <<  endl;
            break;
        case 'D':
        case 'd':
            cout << "Kalmaktan iyidir!" <<  endl;
            break;
        case 'F':
        case 'f':
            cout << "Daha cok calismalisin!" <<  endl;
            break;
        default:
            cout << "Eksik veya hatali giris yaptiniz. Lutfen tekrar deneyiniz!" <<  endl;
    }

    return (0);
}