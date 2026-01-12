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
    int youngestAge = currentYear - birthYears[0];

    for (int i = 1; i < n; i++) {
        int age = currentYear - birthYears[i];
        if (age > oldestAge) oldestAge = age;
        if (age < youngestAge) youngestAge = age;
    }

    cout << "Возраст самого старшего: " << oldestAge << " лет\n";
    cout << "Возраст самого молодого: " << youngestAge << " лет\n";
    cout << "Разница: " << oldestAge - youngestAge << " лет\n";

    return 0;
}