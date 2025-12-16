#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество учеников: ";
    cin >> n;

    int boysCount = 0, girlsCount = 0;
    double boysSum = 0, girlsSum = 0;

    cout << "Введите рост (отрицательные – мальчики): ";
    for (int i = 0; i < n; i++) {
        double height;
        cin >> height;
        if (height < 0) {
            boysSum += abs(height);
            boysCount++;
        }
        else {
            girlsSum += height;
            girlsCount++;
        }
    }

    if (boysCount > 0 && girlsCount > 0) {
        double avgBoys = boysSum / boysCount;
        double avgGirls = girlsSum / girlsCount;
        bool moreThan10 = avgBoys > avgGirls + 10;
        cout << "Средний рост мальчиков: " << avgBoys << endl;
        cout << "Средний рост девочек: " << avgGirls << endl;
        cout << "Средний рост мальчиков > среднего роста девочек на 10 см: "
            << (moreThan10 ? "Да" : "Нет") << endl;
    }
    else {
        cout << "Недостаточно данных\n";
    }

    return 0;
}