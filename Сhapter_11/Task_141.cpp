#include <iostream>
#include <ctime>
#include <climits>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 30;
    int birthYears[n];

    cout << "Введите год рождения " << n << " человек:\n";
    for (int i = 0; i < n; i++) cin >> birthYears[i];

    // Получаем текущий год
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    int currentYear = timePtr->tm_year + 1900;

    // Рассчитываем возраст
    int ages[n];
    for (int i = 0; i < n; i++) {
        ages[i] = currentYear - birthYears[i];
    }

    // Находим два самых старших
    int max1 = -1, max2 = -1;
    int year1 = 0, year2 = 0;

    for (int i = 0; i < n; i++) {
        if (ages[i] > max1) {
            max2 = max1;
            year2 = year1;
            max1 = ages[i];
            year1 = birthYears[i];
        }
        else if (ages[i] > max2 && ages[i] < max1) {
            max2 = ages[i];
            year2 = birthYears[i];
        }
        else if (ages[i] == max1 && max2 == -1) {
            max2 = ages[i];
            year2 = birthYears[i];
        }
    }

    cout << "Два самых старших родились в: " << year1 << " и " << year2 << " годах\n";
    cout << "Их возраст: " << max1 << " и " << max2 << " лет\n";

    return 0;
}