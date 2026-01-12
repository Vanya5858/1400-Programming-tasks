#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 31;
    double rain[days];

    cout << "Введите количество осадков за каждый день июля:\n";
    for (int i = 0; i < days; i++) cin >> rain[i];

    double maxRain = rain[0];
    int firstDay = 1, lastDay = 1;

    for (int i = 1; i < days; i++) {
        if (rain[i] > maxRain) {
            maxRain = rain[i];
            firstDay = i + 1;
            lastDay = i + 1;
        }
        else if (rain[i] == maxRain) {
            lastDay = i + 1;
        }
    }

    cout << "Максимальное количество осадков: " << maxRain << " мм\n";
    cout << "Дата первого такого дня: " << firstDay << " июля\n";
    cout << "Дата последнего такого дня: " << lastDay << " июля\n";

    return 0;
}