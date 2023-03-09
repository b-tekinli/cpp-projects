#include <iostream>
using namespace std;

struct insan {
    string isim;
    int yas;
};

int main() {
    insan *ali = new insan;
    ali->isim = "Ali";
    ali->yas = 20;

    cout << ali->isim << " " << ali->yas << " yasinda" << endl;


    // diğer yazım şekli
    (*ali).isim = "Ali";
    (*ali).yas = 20;


    cout << (*ali).isim << " " << (*ali).yas << " yasinda" << endl;


    return (0);
}
