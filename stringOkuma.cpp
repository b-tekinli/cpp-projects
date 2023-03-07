#include <iostream>
using namespace std;

int main() {
    char name[20];
    
    cout << "Adinizi giriniz: " << endl;
    cin.getline(name, 20);

    cout << "Merhaba " << name << " !" << endl;



    cout << "Adinizi giriniz: " << endl;
    cin.get(name, 20);

    cout << "Merhaba " << name << " !" << endl;
    

    return (0);
}