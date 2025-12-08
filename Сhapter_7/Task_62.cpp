#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество чисел n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Ошибка: n должно быть положительным";
        return 0;
    }

    int p, k;
    int countGreaterP = 0;
    int countEndsWith5 = 0;
    int countMultipleK = 0;

    cout << "Введите значение p (для пункта а): ";
    cin >> p;
    cout << "Введите значение k (для пункта в): ";
    cin >> k;
    cout << "Введите " << n << " целых чисел: ";

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        // а) количество чисел > p
        if (a > p)
            countGreaterP++;

        // б) количество чисел, оканчивающихся цифрой 5
        int lastDigit = a % 10;
        if (lastDigit == 5 || lastDigit == -5) // учитываем отрицательные
            countEndsWith5++;

        // в) количество чисел, кратных k
        if (a % k == 0)
            countMultipleK++;
    }

    cout << "\nРезультаты:\n";
    cout << "а) Количество чисел больше " << p << ": " << countGreaterP << endl;
    cout << "б) Количество чисел, оканчивающихся на 5: " << countEndsWith5 << endl;
    cout << "в) Количество чисел, кратных " << k << ": " << countMultipleK << endl;

    return 0;
}