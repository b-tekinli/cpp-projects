#include <iostream>     // cout fonk. kullanabilmek icin eklenir.
using namespace std;    // std ifadesini surekli kullanmamak icin

int main() {
    int num;

    // cin --> console input'tan gelir.
    cin >> num;         // klavyeden veri okumayi saglar.

    
    // cout --> console output'tan gelir.
    cout << "Girilen sayi: " << num << endl;        // ekrana yazdirmayi saglar.
    
    
    /*
    endl --> newline atar. 
    \n ile arasında bir fark yoktur.
    */ 


    string mesaj = "Hello World!\n";
    cout << mesaj;
    
    return (0);
}

