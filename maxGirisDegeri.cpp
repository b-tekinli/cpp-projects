#include <iostream>
using namespace std;

int main() {
    int array[5];
    int max = 0, i = 0;

    for (i = 0; i < 5; i++)
    {
        cout << "Bir sayi giriniz: ";
        cin >> array[i];

        if(array[i] > max) {
            max = array[i];
        }
    }
    
    cout << "Max giris: " << max;

    return (0);
}
