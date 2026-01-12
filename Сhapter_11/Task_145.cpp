#include <iostream>
#include <climits>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 28;
    double temps[days];

    cout << "Введите среднедневную температуру за каждый день февраля:\n";
    for (int i = 0; i < days; i++) cin >> temps[i];

    double min1 = 100, min2 = 100;
    int day1 = -1, day2 = -1;

    for (int i = 0; i < days; i++) {
        if (temps[i] < min1) {
            min2 = min1;
            day2 = day1;
            min1 = temps[i];
            day1 = i;
        }
        else if (temps[i] < min2 && temps[i] > min1) {
            min2 = temps[i];
            day2 = i;
        }
        else if (temps[i] == min1 && min2 == 100) {
            min2 = temps[i];
            day2 = i;
        }
    }

    cout << "Самые холодные дни: " << day1 + 1 << " и " << day2 + 1 << " февраля\n";
    cout << "Температуры: " << min1 << "C и " << min2 << "°C\n";

    return 0;
}