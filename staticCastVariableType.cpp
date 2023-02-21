#include <iostream>
using namespace std;

int main() {
    // veri tipi donusturmek icin "static_cast" kullanılır.
    
    /*
    Bir ifadeyi bir veri türünden başka bir veri türüne dönüştürürken, uygunluk denetimleri yaparak dönüştürme işlemini gerçekleştirir. Bu sayede, dönüştürme işlemi sırasında potansiyel hata durumları (örneğin bellek taşmaları) önlenir.
    */
    
    double a = 6.1;
    cout << a << endl;
    cout << a + 3 << endl;

    int b = static_cast<int>(a);
    cout << b + 5 << endl;



    char c = 'C';
    cout << c << endl;

    int test = static_cast<int>(c);
    cout << test << endl;



    bool d = true;
    cout << d << endl;

    float test2 = static_cast<float>(d);
    cout << test2 << endl;

    char test3 = static_cast<char>(d);
    cout << test3 << endl;



    char e = '\0';      // false dondurmesi icin
    cout << e << endl;

    bool test4 = static_cast<bool>(e);
    cout << test4 << " a" << endl;

    return (0);
}
