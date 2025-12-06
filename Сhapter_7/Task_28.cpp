#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int grade, sum = 0;

    cout << "Введите оценки ученика по 10 предметам: ";
    for (int i = 0; i < 10; i++) {
        cin >> grade;
        sum += grade;
    }

    cout << "Средняя оценка = " << sum / 10.0;
    return 0;
}