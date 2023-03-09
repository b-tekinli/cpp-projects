#include <iostream>
using namespace std;

class animal {
    public:
        animal() {
            cout << "animal constructor" << endl;
        }

        ~animal() {
            cout << "animal destructor" << endl;
        }
};

int main() {

    animal leo;

    // program çalıştırıldığında önce class'tan obje oluşturulur ve constructor çalışır 
    // sonrasında nesne öldürüldüğünde de destructor çalışır çünkü bu bellek yönetimiyle ilgilidir ve aslında onu freeler.
    
    cout << "program hala calisiyor" << endl;

    // 22. satırı eklediğim için şimdi ekranda önce constructor çalışır sonra 22. satır çalışır sonra da destructor çalışır.


    return (0);
}