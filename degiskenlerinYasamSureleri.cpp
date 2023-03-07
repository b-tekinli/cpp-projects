#include <iostream>
using namespace std;

int globalVar = 10;             // program sona erince yok olur.

void testFunc() {
    int localVar1 = 2;          // fonk. sonunda yok olur.
    static int staticVar = 1;   // program sona erince yok olur.

    {
        int localVar2 = 1;      // blok sonunda yok olur.
    }
}

int main() {
    int localVar3 = 3;          // blok sona erince yok olur.

    if(localVar3) {
        int localVar4 = 1;      // blok sonunda yok olur.
    }

    return (0);
}
