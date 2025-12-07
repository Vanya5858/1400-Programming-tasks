#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int grade, sum1 = 0, sum2 = 0;
    int students;

    cout << "Введите количество учеников в каждом классе: ";
    cin >> students;

    cout << "Введите оценки по физике первого класса: ";
    for (int i = 0; i < students; i++) {
        cin >> grade;
        sum1 += grade;
    }

    cout << "Введите оценки по физике второго класса: ";
    for (int i = 0; i < students; i++) {
        cin >> grade;
        sum2 += grade;
    }

    cout << "Средняя оценка первого класса = " << (double)sum1 / students << endl;
    cout << "Средняя оценка второго класса = " << (double)sum2 / students;

    return 0;
}