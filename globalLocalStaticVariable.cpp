#include <iostream>
using namespace std;

int global = 3;

void func() {
    int local = 9;
    local += 5;

    cout << "Local fonksiyon icinde: " << local << "\n";

    cout << "Global fonksiyon icinde: " << global << "\n";
}


void counter() {
    static int count = 0;
    count++;
    cout << "Count: " << count << endl;
}


int main() {

    int local = 4;
    local += 11;

    cout << "Local main icinde: " << local << "\n";     // 15
    
    func();     // 14, 3

    cout << "Local main fonksiyon cagirdiktan sonra: " << local << "\n";    // 15

    cout << "Global main icinde: " << global << endl;   // 3

    // local degiskenler sadece bulunduklari parantez icinde gecerlidir ve tanimlandigi yerdeki degerini baz alir fakat global'e her yerden erisilebilir.


    counter();  // 0
    counter();  // 1
    counter();  // 2


    // static degiskenlerde ise deger atamasi yapilmazsa 0 degerini alir. bu degerler fonksiyon cagirildigi yerde degil, fonksiyonun tanimlandigi yerde tutulur. bu yuzden fonksiyon cagirildigi yerdeki degerler degismez.


    return (0);
}
