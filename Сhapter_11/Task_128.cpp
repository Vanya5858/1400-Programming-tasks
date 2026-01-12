#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 31;
    double temps[days];

    cout << "Введите среднедневную температуру за каждый день июля:\n";
    for (int i = 0; i < days; i++) cin >> temps[i];

    double minTemp = temps[0];
    int minCount = 1;

    for (int i = 1; i < days; i++) {
        if (temps[i] < minTemp) {
            minTemp = temps[i];
            minCount = 1;
        }
        else if (temps[i] == minTemp) {
            minCount++;
        }
    }

    cout << "Самая прохладная температура: " << minTemp << "°C\n";
    cout << "Количество самых прохладных дней: " << minCount << endl;

    return 0;
}