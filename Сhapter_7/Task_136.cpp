#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double time, bestTime;
    int count = 0;

    cout << "Вводите время спортсменов (0 для окончания): ";
    while (true) {
        cin >> time;
        if (time == 0) break;

        count++;
        if (count == 1 || time < bestTime) {
            bestTime = time;
        }

        cout << "Текущий лучший результат: " << bestTime << " сек.\n";
    }

    if (count > 0) {
        cout << "Финальный лучший результат: " << bestTime << " сек.\n";
    }

    return 0;
}