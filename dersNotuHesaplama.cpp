#include <iostream>
using namespace std;

int main() {
    // 1.Vize -> %30       2. Vize -> %30       Final -> %40

    int exam1, exam2, finalExam;

    cout << "1. Vize notunuzu giriniz: ";
    cin >> exam1;

    int examPoint1 = exam1 * 0.3;
    cout << "1. Vizeden gelen not: " << examPoint1 << endl;

    
    cout << "2. Vize notunuzu giriniz: ";
    cin >> exam2;

    int examPoint2 = exam2 * 0.3;
    cout << "2. Vizeden gelen not: " << examPoint2 << endl;


    cout << "Final notunuzu giriniz: ";
    cin >> finalExam;

    int finalExamPoint = finalExam * 0.4;
    cout << "Final notunuzdan gelen not: " << finalExamPoint << endl;

    int result = examPoint1 + examPoint2 + finalExamPoint;

    cout << "Donem sonu notunuz: " << result << endl;


    if (result >= 90 && result <= 100)
    {
        cout << "Harf notunuz AA" << endl;
    }
    else if (result >= 85 && result <= 89)
    {
        cout << "Harf notunuz BA" << endl;
    }
    else if (result >= 80 && result <= 84)
    {
        cout << "Harf notunuz BB" << endl;
    }
    else if (result >= 70 && result <= 79)
    {
        cout << "Harf notunuz CB" << endl;
    }
    else if (result >= 60 && result <= 69)
    {
        cout << "Harf notunuz CC" << endl;
    }
    else if (result >= 50 && result <= 59)
    {
        cout << "Harf notunuz DC" << endl;
    }
    else if (result >= 45 && result <= 49)
    {
        cout << "Harf notunuz DD" << endl;
    }
    else if (result >= 0 && result <= 44)
    {
        cout << "Harf notunuz FF" << endl;
    }
    else if (!result)
    {
        cout << "Harf notunuz FG -> Sinavlara girmediniz!" << endl;
    }
    else {
        cout << "Yanlis ya da eksik giris yaptiniz. Lutfen tekrar deneyiniz!" << endl;
    }
    
    return (0);
}
