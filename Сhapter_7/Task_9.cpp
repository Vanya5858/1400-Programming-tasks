#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int grade, sum1 = 0, sum2 = 0;

    cout << "Введите оценки первого ученика по 4 предметам: ";
    for (int i = 0; i < 4; i++) {
        cin >> grade;
        sum1 += grade;
    }

    cout << "Введите оценки второго ученика по 4 предметам: ";
    for (int i = 0; i < 4; i++) {
        cin >> grade;
        sum2 += grade;
    }

    cout << "Сумма оценок первого ученика = " << sum1 << endl;
    cout << "Сумма оценок второго ученика = " << sum2;
    return 0;
}