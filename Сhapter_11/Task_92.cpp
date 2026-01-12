#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 22;
    int heights[n];

    cout << "Введите рост " << n << " учеников (мальчики - отрицательные числа):\n";
    for (int i = 0; i < n; i++) cin >> heights[i];

    double sumBoys = 0, sumGirls = 0;
    int countBoys = 0, countGirls = 0;

    for (int i = 0; i < n; i++) {
        if (heights[i] < 0) {
            sumBoys += abs(heights[i]);
            countBoys++;
        }
        else {
            sumGirls += heights[i];
            countGirls++;
        }
    }

    if (countBoys > 0)
        cout << "Средний рост мальчиков: " << sumBoys / countBoys << " см\n";
    else
        cout << "Нет мальчиков.\n";

    if (countGirls > 0)
        cout << "Средний рост девочек: " << sumGirls / countGirls << " см\n";
    else
        cout << "Нет девочек.\n";

    return 0;
}