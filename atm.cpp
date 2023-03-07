#include <iostream>
using namespace std;

void showMenu() {
    cout << "1) Hesap Bilgisi Goster\n2) Para Yatir\n3) Para Cek\n4) Cikis\nSeciminiz: " << endl;
}

int main() {
    int giris = 0;
    int totalBakiye = 0, yatirim = 0, cekim = 0;

    while(1) {
        showMenu();
        cin >> giris;

        switch (giris)
        {
        case 1:
            cout << "Hesabinizda " << totalBakiye << " TL bulunuyor." << endl;
            break;
        case 2:
            cout << "Yatirilacak tutari giriniz: ";
            cin >> yatirim;
            totalBakiye += yatirim;
            cout << "Toplam bakiye: " << totalBakiye << endl;
            break;
        case 3:
            cout << "Cekilecek tutari giriniz: ";
            cin >> cekim;
            if(cekim > totalBakiye) {
                cout << "Yetersiz bakiye!" << endl;
            } else {
                totalBakiye -= cekim;
                cout << "Kalan bakiye: " << totalBakiye << " TL\n";
            }
            break;
        case 4:
            cout << "Cikis yapildi.\n";
            exit(EXIT_SUCCESS);
        default:
            break;
        }
    }
}