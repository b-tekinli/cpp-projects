#include <iostream>
using namespace std;

void birEkle(int &deger) {
    deger += 1;
    cout << "Fonksiyon ici: " << deger << endl;
}

int main() {
    int sayi;
    cout << "Bir sayi giriniz: ";   // 5
    cin >> sayi;

    cout << "Kullanici girisi: " << sayi << endl;   // 5
    
    birEkle(sayi);  // 6

    cout << "Fonksiyon sonrasi (main): " << sayi << endl;   // 6
    
    return (0);
}
