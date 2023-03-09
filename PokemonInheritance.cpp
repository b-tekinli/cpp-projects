#include <iostream>
using namespace std;

class Pokemon {
    protected:
        string isim;
        string saldiri;

    public:
        Pokemon(string name, string attack) {
            isim = name;
            saldiri = attack;
        }
        void isimSoyle() { cout << "Benim ismim " << isim << endl; }
        void saldir() { cout << saldiri << endl; }
};


class Pikacu : public Pokemon {     // pokemon sınıfını inherit aldık.
    public:
        Pikacu(string name, string attack) : Pokemon(name, attack) {    // base class a parametre atadık
            
        }
        // override
        void saldir() {
            cout << "Elektrik saldirisi !" << endl;
        }
};


class Charmander : public Pokemon {
    public:
        Charmander(string name, string attack) : Pokemon(name, attack) {
            
        }
        // override
        void saldir() {
            cout << "Alev firtinasi saldirisi !" << endl;
        }
};


int main() {
    Pikacu pikacu("Pikacu", "Yildirim saldirisi !");

    cout << "Seni sectim Pikacu: ";
    pikacu.isimSoyle();
    pikacu.saldir();


    Charmander charmander("Charmander", "Ates topu saldirisi !");

    cout << "Seni sectim Charmander: ";
    charmander.isimSoyle();
    charmander.saldir();


    return (0);
}
