#include <iostream>     // cout fonk. kullanabilmek icin eklenir.
using namespace std;    // std ifadesini surekli kullanmamak icin

int main() {
    int num;


    // cout --> console output'tan gelir.
    cout << "Sayi giriniz: ";                // ekrana yazdirmayi saglar.


    // cin --> console input'tan gelir.
    cin >> num;         // klavyeden veri okumayi saglar.

    
    cout << "Girilen sayi: " << num << endl;
    
    
    /*
    endl --> newline atar. 
    \n ile arasında bir fark yoktur.
    */ 


    string mesaj = "Hello World!\n";
    cout << mesaj;
    
    
    return (0);
}

