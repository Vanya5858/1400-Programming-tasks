#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int students, total = 0;

    cout << "Введите количество учеников в классах с 1 по 11 (11 чисел): ";

    for (int grade = 1; grade <= 11; grade++) {
        cin >> students;
        if (grade % 2 == 1)
            total += students;
    }

    cout << "Общее число учеников в нечётных классах = " << total;
    return 0;
}