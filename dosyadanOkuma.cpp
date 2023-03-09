#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputStream;
    inputStream.open("a.txt");

    string kelime1, kelime2;

    inputStream >> kelime1 >> kelime2;

    cout << kelime1 << kelime2;

    inputStream.close();

    return (0);
}
