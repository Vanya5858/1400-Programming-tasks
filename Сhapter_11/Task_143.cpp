#include <iostream>
#include <climits>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 31;
    double temps[days];

    cout << "Введите среднедневную температуру за каждый день июля:\n";
    for (int i = 0; i < days; i++) cin >> temps[i];

    double max1 = -100, max2 = -100;
    int day1 = -1, day2 = -1;

    for (int i = 0; i < days; i++) {
        if (temps[i] > max1) {
            max2 = max1;
            day2 = day1;
            max1 = temps[i];
            day1 = i;
        }
        else if (temps[i] > max2 && temps[i] < max1) {
            max2 = temps[i];
            day2 = i;
        }
        else if (temps[i] == max1 && max2 == -100) {
            max2 = temps[i];
            day2 = i;
        }
    }

    cout << "Самые теплые дни: " << day1 + 1 << " и " << day2 + 1 << " июля\n";
    cout << "Температуры: " << max1 << "C и " << max2 << "°C\n";

    return 0;
}