#include <iostream>
using namespace std;

class Balik {
    public:
        Balik() {
            cout << "Balik constructor" << endl;
        }

        virtual ~Balik() {
            cout << "Balik destructor" << endl;
        }

        virtual void yuz() { cout << "Balik yuzuyor.." << endl; }
        // virtual void yuz() = 0; --> pure virtual func
};


class Yunus : public Balik {
    public:
        Yunus() {
            cout << "Yunus constructor" << endl;
        }
        
        ~Yunus() {
            cout << "Yunus destructor" << endl;
        }

        virtual void yuz() { cout << "Yunus yuzuyor.." << endl; }
};


class Balina : public Balik {
    public:
        Balina() {
            cout << "Balina constructor" << endl;
        }
        
        ~Balina() {
            cout << "Balina destructor" << endl;
        }

        void yuz() { cout << "Balina yuzuyor.." << endl; }
};

void baligiYuzdur(Balik &balik) {
    balik.yuz();
}

void baligiSil(Balik *balik) {
    delete balik;
}

int main() {
    Yunus *yunus = new Yunus;   // dinamik olduğu için heapte fazla yer tutar.
    // baligiYuzdur(yunus);
    baligiSil(yunus);

    // Balina balina;
    // baligiYuzdur(balina);

    Balina *balina = new Balina;
    baligiSil(balina);

    // delete yunus;

    return (0);
}
