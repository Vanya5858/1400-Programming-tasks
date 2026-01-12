#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 31;
    double temp[days];

    cout << "Введите температуру за каждый день июля:\n";
    for (int i = 0; i < days; i++) cin >> temp[i];

    int maxStart = 0;
    double maxAvg = 0;

    // Первые 7 дней
    double currentSum = 0;
    for (int i = 0; i < 7; i++) currentSum += temp[i];
    maxAvg = currentSum / 7;

    // Скользящее окно
    for (int i = 1; i <= days - 7; i++) {
        currentSum = currentSum - temp[i - 1] + temp[i + 6];
        double currentAvg = currentSum / 7;
        if (currentAvg > maxAvg) {
            maxAvg = currentAvg;
            maxStart = i;
        }
    }

    cout << "Самые теплые 7 дней начинаются с " << maxStart + 1 << " июля\n";
    cout << "Средняя температура: " << maxAvg << "C\n";

    return 0;
}