#include <iostream>
using namespace std;

class exception_class {

};

int divide(int bolunen, int bolen) {
    if(bolen == 0) {
        // throw 1;
        // throw string("zero_input");
        // throw exception_class();
        throw 1.5;
    }
    return bolunen / bolen;
}

int main() {
    int bolen, bolunen = 100, sonuc;

    cout << "Kullanici girisi: ";
    cin << bolen;

    try {
        /*
        if(bolen == 0) {
            throw 1;
        }
        sonuc = bolunen / bolen;    // problemli bolum
        */
       sonuc = divide(bolunen, bolen);
        cout << sonuc;
    }
    catch(exception_class e) {
        cout << "Yanlis giris yaptiniz. 0 girilemez. \n";
    }
    catch(int e) {
        cout << "int catch block. \n";
    }
    catch(double e) {
        cout << "double catch block. \n";
    }
    catch(string e) {
        cout << "string catch block. \n";
    }
    catch(...) {
        cout << "default catch block. \n";
    }

    return (0);
}
