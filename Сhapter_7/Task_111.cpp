#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double height;
    double sumBoys = 0, sumGirls = 0;
    int countBoys = 0, countGirls = 0;
    int students;

    cout << "Введите количество учеников в классе: ";
    cin >> students;
    cout << "Введите рост каждого ученика (мальчики - отрицательные числа): ";

    for (int i = 0; i < students; i++) {
        cin >> height;
        if (height < 0) { // мальчики
            sumBoys += abs(height);
            countBoys++;
        }
        else { // девочки
            sumGirls += height;
            countGirls++;
        }
    }

    cout << "Средний рост мальчиков: ";
    if (countBoys > 0) {
        cout << sumBoys / countBoys << " см";
    }
    else {
        cout << "нет мальчиков";
    }

    cout << "\nСредний рост девочек: ";
    if (countGirls > 0) {
        cout << sumGirls / countGirls << " см";
    }
    else {
        cout << "нет девочек";
    }

    return 0;
}