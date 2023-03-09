#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(10);
    v.push_back(20);
    v.push_back(23);


    for (int i = 0; i < v.size(); i++)
    {
        cout << i << ". indis: " << v[i] << endl;
    }

    cout << "Vektör boyutu: " << v.size() << endl;  // vektör boyutu
    

    return (0);
}