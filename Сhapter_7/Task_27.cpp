#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int grade, sum = 0;

    cout << "Введите оценки по физике 20 учеников: ";
    for (int i = 0; i < 20; i++) {
        cin >> grade;
        sum += grade;
    }

    cout << "Средняя оценка = " << sum / 20.0;
    return 0;
}