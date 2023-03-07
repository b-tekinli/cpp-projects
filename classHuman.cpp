#include <iostream>
using namespace std;

class insan {
    public:     // her yerden erisilebilir
        string isim;
        int yas;
        string cinsiyet;
        void konusma() {
            cout << "benim ismim: " << isim << endl;
            cout << "yasim: " << yas << endl;
            cout << "cinsiyetim: " << cinsiyet << endl;
            cout << "*************************" << endl;
        }
};

int main() {

    insan person1;
    person1.isim = "beyza";
    person1.yas = 23;
    person1.cinsiyet = "kadin";
    person1.konusma();


    insan person2;
    person2.isim = "ahmet";
    person2.yas = 20;
    person2.cinsiyet = "erkek";
    person2.konusma();

    return (0);
}
