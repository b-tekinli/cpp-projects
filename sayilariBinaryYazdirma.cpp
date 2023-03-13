#include <iostream>
#include <bitset>
using namespace std;


int main() {
    int sayi;

    cout << "sayi default -> " << sayi << "\n";
    cout << "sayi decimal -> " << showbase << dec << sayi << "\n";
    cout << "sayi hex -> " << showbase << hex << sayi << "\n";
    cout << "sayi octal -> " << showbase << oct << sayi << "\n";
    cout << "sayi binary -> " << bitset<16>(sayi) << "\n";


    return (0);
}
