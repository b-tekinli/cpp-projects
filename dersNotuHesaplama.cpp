#include <iostream>
using namespace std;

int main() {
    // 1.Vize -> %30       2. Vize -> %30       Final -> %40

    float exam1, exam2, finalExam;

    cout << "1. Vize notunuzu giriniz: ";
    cin >> exam1;

    float examPoint1 = exam1 * 30 / 100;
    cout << "1. Vizeden gelen not: " << examPoint1 << endl;

    
    cout << "2. Vize notunuzu giriniz: ";
    cin >> exam2;

    float examPoint2 = exam2 * 30 / 100;
    cout << "2. Vizeden gelen not: " << examPoint2 << endl;


    cout << "Final notunuzu giriniz: ";
    cin >> finalExam;

    float finalExamPoint = finalExam * 40 / 100;
    cout << "Final notunuzdan gelen not: " << finalExamPoint << endl;

    double result = examPoint1 + examPoint2 + finalExamPoint;

    cout << "Toplam notunuz: " << result << endl;

    return (0);
}