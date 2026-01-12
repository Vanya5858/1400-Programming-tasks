#include <iostream>
#include <ctime>
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

    int oldestAge = currentYear - birthYears[0];
    int firstIndex = 0, lastIndex = 0;

    for (int i = 1; i < n; i++) {
        int age = currentYear - birthYears[i];
        if (age > oldestAge) {
            oldestAge = age;
            firstIndex = i;
            lastIndex = i;
        }
        else if (age == oldestAge) {
            lastIndex = i;
        }
    }

    cout << "Самый старший возраст: " << oldestAge << " лет\n";
    cout << "Порядковый номер первого: " << firstIndex + 1 << endl;
    cout << "Порядковый номер последнего: " << lastIndex + 1 << endl;

    return 0;
}