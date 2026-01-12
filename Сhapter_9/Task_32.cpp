#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a, b;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;

    int maxSum = 0;
    int numberWithMaxSum = a;

    for (int n = a; n <= b; n++) {
        int sum = 0;

        // Суммируем все делители
        for (int d = 1; d <= n; d++) {
            if (n % d == 0) {
                sum += d;
            }
        }

        if (sum > maxSum) {
            maxSum = sum;
            numberWithMaxSum = n;
        }
    }

    cout << "\nЧисло с максимальной суммой делителей: " << numberWithMaxSum << endl;
    cout << "Сумма его делителей: " << maxSum << endl;

    // Выводим делители для наглядности
    cout << "Делители числа " << numberWithMaxSum << ": ";
    bool first = true;
    for (int d = 1; d <= numberWithMaxSum; d++) {
        if (numberWithMaxSum % d == 0) {
            if (!first) cout << " + ";
            cout << d;
            first = false;
        }
    }
    cout << " = " << maxSum << endl;

    return 0;
}