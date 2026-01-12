#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 30;
    double rain[days];

    cout << "Введите количество осадков за каждый день сентября (" << days << " чисел):\n";
    for (int i = 0; i < days; i++) {
        cin >> rain[i];
    }

    int count1 = 0, count2 = 0, count3 = 0;
    double sum1 = 0, sum2 = 0, sum3 = 0;

    for (int i = 0; i < 10; i++) if (rain[i] > 0) { sum1 += rain[i]; count1++; }
    for (int i = 10; i < 20; i++) if (rain[i] > 0) { sum2 += rain[i]; count2++; }
    for (int i = 20; i < 30; i++) if (rain[i] > 0) { sum3 += rain[i]; count3++; }

    cout << "Среднее за день в 1-й декаде: " << (count1 > 0 ? sum1 / count1 : 0) << " мм\n";
    cout << "Среднее за день во 2-й декаде: " << (count2 > 0 ? sum2 / count2 : 0) << " мм\n";
    cout << "Среднее за день в 3-й декаде: " << (count3 > 0 ? sum3 / count3 : 0) << " мм\n";

    return 0;
}