#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(NULL));                                  // her seferinde farkli sayi uretmesi icin
    
    int minNumber = 1;
    int maxNumber = 100;
    int secretNumber = rand() % maxNumber + minNumber;  // random sayı

    int guess;                                          // kullanıcının tahmini


    cout << "Sayi tahmin oyununa hos geldiniz!" << endl;
    cout << "Aklimdaki sayi " << minNumber << " ile " << maxNumber << " arasindadir." << endl;


    do {
        cout << "Lutfen bir tahminde bulunun: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Tebrikler, dogru tahmin ettiniz! \a" << endl;
        } else if (guess < secretNumber) {
            cout << "Daha buyuk bir sayi tahmin edin." << endl;
        } else {
            cout << "Daha kucuk bir sayi tahmin edin." << endl;
        }
    } while (guess != secretNumber);


    return 0;
}
