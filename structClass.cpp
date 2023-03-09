#include <iostream>
using namespace std;

struct Araba1 {  // structlarda degiskenleri public ya da private olarak belirtmedigimizde default olarak public belirlenir.
    string marka;
    int model;
};

class Araba2 {  // classlarda degiskenleri public ya da private olarak belirtmedigimizde default olarak private belirlenir.
    string marka;
    int model;
};

int main() {
    Araba1 chevrolet;
    chevrolet.marka = "chevrolet";
    chevrolet.model = 2011;

    Araba2 audi;
    // audi.marka = "audi";    // burada hata alırız public olmadığı için
    // audi.model = 2020;


    return (0);
}
