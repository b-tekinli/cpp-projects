#include <iostream>
using namespace std;

int main() {
    string mesaj = "Hello World\n";     // alt satıra gecer.
    cout << mesaj;

    string t = "a\ta";                  // bir tab bosluk bırakır.
    cout << t << endl;


    string a = "b\a";                   // beep sesi, uyarı sesi cıkarır.
    cout << a << endl;;

    string s = "4//1";                  // kacıs dizisinden sonra gelen karaktere normal anlam kazandırır kendi islevinde kullanılır.
    cout << s << endl;;

    string test = "Istanbul\" \'";      // string icinde tek ve cift tırnak kullanabilmemizi saglar.
    cout << test;

    return (0);
}