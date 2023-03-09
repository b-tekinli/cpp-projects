#include <iostream>
using namespace std;

template <typename T>

T Min(T x, T y) {
    if(x < y)
        return x;
    else
        return y;
}

int main() {
    auto result = Min(5.421, 3.423);    // auto her data type için geçerlidir.

    cout << "Sonuc: " << result;

    return (0);
}
