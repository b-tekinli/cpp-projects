#include <iostream>
using namespace std;

int main() {
    string normalString = "test \ntest2";
    string rawString = R"(test3 \n "a" \t test4)";      // bu satırdaki kacıs dizeleri yukarıdaki satırda oldugu gibi farklı renkle bile belirtilmedi. dolayısıyla buradan tum dizeyi oldugu gibi yazdıgını anlayabiliyoruz.

    cout << normalString << endl << rawString << endl;

    return (0);
}
