#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 31;
    double rain[days];

    cout << "Введите количество осадков за каждый день октября:\n";
    for (int i = 0; i < days; i++) cin >> rain[i];

    double maxRain = rain[0];
    int maxCount = 1;

    for (int i = 1; i < days; i++) {
        if (rain[i] > maxRain) {
            maxRain = rain[i];
            maxCount = 1;
        }
        else if (rain[i] == maxRain) {
            maxCount++;
        }
    }

    cout << "Максимальное количество осадков: " << maxRain << " мм\n";
    cout << "Количество дней с таким количеством: " << maxCount << endl;

    return 0;
}