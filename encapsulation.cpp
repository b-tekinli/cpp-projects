#include <iostream>
using namespace std;

class Bilgisayar {
    private:
        string marka;
        int yil;
        string islemci;
        int ram;
        double fiyat;
    public:
        void setBrand(string brand);
        void setYear(int year);
        void setCPU(string cpu);
        void setRAM(int ram);
        void setPrice(double price);

        string getBrand();
        int getYear();
        double getPrice();

        void bilgisayarBilgileri();
};

void Bilgisayar::setBrand(string brand) {
    brand = marka;
}

void Bilgisayar::setYear(int year) {
    year = yil;
}

void Bilgisayar::setCPU(string cpu) {
    cpu = islemci;
}

void Bilgisayar::setRAM(int ram) {
    ram = ram;
}

void Bilgisayar::setPrice(double price) {
    price = fiyat;
}

string Bilgisayar::getBrand() {
    return marka;
}

int Bilgisayar::getYear() {
    return yil;
}

double Bilgisayar::getPrice() {
    return fiyat;
}

void Bilgisayar::bilgisayarBilgileri() {
    cout << "Marka: " << marka << endl;
    cout << "Yil: " << yil << endl;
    cout << "Islemci: " << islemci << endl;
    cout << "Ram: " << ram << endl;
    cout << "Fiyat: " << fiyat << endl;
    cout << "**************" << endl;
}

int main() {
    Bilgisayar asus, mac, lenovo;

    asus.setBrand("asus");
    asus.setYear(22);
    asus.setCPU("amd ryzen 7");
    asus.setRAM(16);
    asus.setPrice(9.540);

    cout << "Marka: " << asus.getBrand() << endl;
    cout << "Yil: " << asus.getYear() << endl;
    cout << "Fiyat: " << asus.getPrice() << endl;


    asus.bilgisayarBilgileri();


    return (0);
}
