#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double age, sum1 = 0, sum2 = 0;

    cout << "Введите возраст 20 учеников первого класса: ";
    for (int i = 0; i < 20; i++) {
        cin >> age;
        sum1 += age;
    }

    cout << "Введите возраст 20 учеников второго класса: ";
    for (int i = 0; i < 20; i++) {
        cin >> age;
        sum2 += age;
    }

    cout << "Средний возраст первого класса = " << sum1 / 20.0 << endl;
    cout << "Средний возраст второго класса = " << sum2 / 20.0;

    return 0;
}