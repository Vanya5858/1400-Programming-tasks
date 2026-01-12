#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int years = 15;
    double rainfall[years];

    cout << "Введите количество осадков за " << years << " лет:\n";
    for (int i = 0; i < years; i++) cin >> rainfall[i];

    double sum = 0;
    for (int i = 0; i < years; i++) sum += rainfall[i];
    double avg = sum / years;

    cout << "Среднее количество осадков: " << avg << " мм\n";
    cout << "Отклонения от среднего:\n";
    for (int i = 0; i < years; i++) {
        cout << (i + 2001) << ": " << rainfall[i] - avg << " мм\n";
    }

    return 0;
}