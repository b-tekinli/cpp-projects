#include <iostream>
using namespace std;

class Bilgisayar {
    private:
        string marka;
        int yil;
        string islemci;
        int ramGB;
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
    marka = brand;
}

void Bilgisayar::setYear(int year) {
    yil = year;
}

void Bilgisayar::setCPU(string cpu) {
    islemci = cpu;
}

void Bilgisayar::setRAM(int ram) {
    ramGB = ram;
}

void Bilgisayar::setPrice(double price) {
    fiyat = price;
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
    cout << "Ram: " << ramGB << endl;
    cout << "Fiyat: " << fiyat << endl;
    cout << "**************" << endl;
}

int main() {
    Bilgisayar asus, mac;

    asus.setBrand("asus");
    asus.setYear(2022);
    asus.setPrice(9.540);
    asus.setCPU("amd ryzen 7");
    asus.setRAM(16);

    cout << "Marka: " << asus.getBrand() << endl;
    cout << "Yil: " << asus.getYear() << endl;
    cout << "Fiyat: " << asus.getPrice() << endl;

    asus.bilgisayarBilgileri();



    mac.setBrand("mac");
    mac.setYear(2017);
    mac.setPrice(27.540);

    cout << "Marka: " << mac.getBrand() << endl;
    cout << "Yil: " << mac.getYear() << endl;
    cout << "Fiyat: " << mac.getPrice() << endl;


    return (0);
}
