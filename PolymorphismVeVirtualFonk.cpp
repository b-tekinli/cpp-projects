#include <iostream>
using namespace std;

class Balik {
    public:
        virtual void yuz() { cout << "Balik yuzuyor.." << endl; }
};


class Yunus : public Balik {
    public:
        void yuz() { cout << "Yunus yuzuyor.." << endl; }
};


class Balina : public Balik {
    public:
        void yuz() { cout << "Balina yuzuyor.." << endl; }
};

void baligiYuzdur(Balik &balik) {
    balik.yuz();
}

int main() {
    Yunus yunus;
    baligiYuzdur(yunus);

    Balina balina;
    baligiYuzdur(balina);

    return (0);
}