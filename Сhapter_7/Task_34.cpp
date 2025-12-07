#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double height, sum1 = 0, sum2 = 0;
    int students;

    cout << "Введите количество учеников в каждом классе: ";
    cin >> students;

    cout << "Введите рост учеников первого класса: ";
    for (int i = 0; i < students; i++) {
        cin >> height;
        sum1 += height;
    }

    cout << "Введите рост учеников второго класса: ";
    for (int i = 0; i < students; i++) {
        cin >> height;
        sum2 += height;
    }

    cout << "Средний рост первого класса = " << sum1 / students << endl;
    cout << "Средний рост второго класса = " << sum2 / students;

    return 0;
}