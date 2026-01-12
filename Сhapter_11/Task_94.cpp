#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 25;
    int heights[n];

    cout << "Введите рост " << n << " учеников (мальчики - отрицательные):\n";
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

    if (countBoys > 0 && countGirls > 0) {
        double avgBoys = sumBoys / countBoys;
        double avgGirls = sumGirls / countGirls;

        if (avgBoys > avgGirls + 10)
            cout << "Средний рост мальчиков превышает средний рост девочек более чем на 10 см.\n";
        else
            cout << "Средний рост мальчиков не превышает средний рост девочек на 10 см.\n";
    }
    else {
        cout << "Недостаточно данных для сравнения.\n";
    }

    return 0;
}