#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int m, n;
    cout << "Введите m: ";
    cin >> m;
    cout << "Введите n: ";
    cin >> n;

    long long sum = 0;

    cout << "\nВычисление суммы:" << endl;
    cout << "S = ";

    for (int i = 1; i <= m; i++) {
        // Вычисляем i в степени n
        long long power = 1;
        for (int p = 0; p < n; p++) {
            power *= i;
        }

        sum += power;

        // Вывод члена суммы
        cout << i << "^" << n;
        if (i < m) cout << " + ";
    }

    cout << " = " << sum << endl;

    // Выводим промежуточные вычисления
    cout << "\nПодробно:" << endl;
    for (int i = 1; i <= m; i++) {
        long long power = 1;
        for (int p = 0; p < n; p++) {
            power *= i;
        }
        cout << i << "^" << n << " = " << power << endl;
    }

    cout << "\nИтоговая сумма: " << sum << endl;

    return 0;
}