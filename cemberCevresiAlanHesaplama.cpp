#include <iostream>
using namespace std;

int main() {
    float pi = 3.14;
    int r;
    
    cout << "Cember cevresi hesaplamak icin yaricap giriniz: ";
    cin >> r;

    float cevre = 2 * pi * r;

    cout << "Cemberin cevresi = " << cevre << " olarak hesaplandi." << endl;

    cout <<  "Cember alani hesaplamak icin yaricap giriniz: ";
    cin >> r;

    float alan = pi * (r * r);

    cout << "Cemberin alani = " << alan << " olarak hesaplandi." << endl;

    return (0);
}