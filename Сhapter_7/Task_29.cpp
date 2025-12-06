#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int students, grade, sum = 0;

    cout << "Введите количество учеников в классе: ";
    cin >> students;
    cout << "Введите оценки по алгебре для каждого ученика: ";

    for (int i = 0; i < students; i++) {
        cin >> grade;
        sum += grade;
    }

    cout << "Средняя оценка = " << sum / (double)students;
    return 0;
}