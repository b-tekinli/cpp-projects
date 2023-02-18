#include <iostream>
using namespace std;

int main() {
    int kenarUzunlugu;

    cout << "Kenar uzunlugu giriniz: ";
    cin >> kenarUzunlugu;

    int cevre = kenarUzunlugu * 4;

    cout << "Karenin Cevresi = " << cevre << "\n";

    int alan = kenarUzunlugu * kenarUzunlugu;

    cout << "Karenin Alani = " << alan << "\n";

    return (0);
}