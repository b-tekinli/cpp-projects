#include <iostream>
using namespace std;


// function prototype
int kareHesapla(int num);


int main() {
    int n;

    cout << "Karesini almak istediginiz sayiyi giriniz: ";
    cin >> n;


    cout << n << " sayisinin karesi = " << kareHesapla(n) << endl;


    return (0);
}

int kareHesapla(int num) {
    return num * num;
}

