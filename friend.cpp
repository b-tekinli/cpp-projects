#include <iostream>
using namespace std;

class Insan {
    private:
        string ad;
        int yas;
        friend void yasSoyle(Insan obj);    // friend ile private degiskene dısardan erisebiliriz.

    public:
        Insan(string name, int age) {       // constructor
            ad = name;
            yas = age;
        }
        void adSoyle();
};

void Insan::adSoyle() {
    cout << "Ad: " << ad << endl;
}

void yasSoyle(Insan obj) {
    cout << "Yas: " << obj.yas << endl;
}

int main() {

    Insan insan("Ahmet", 23);

    insan.adSoyle();
    yasSoyle(insan);


    return (0);
}
