#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите n: ";
    cin >> n;

    long long sum = 0;

    cout << "\nВычисление суммы:" << endl;
    cout << "S = ";

    for (int i = 1; i <= n; i++) {
        // Вычисляем i в степени i
        long long power = 1;
        for (int p = 0; p < i; p++) {
            power *= i;
        }

        sum += power;

        // Вывод члена суммы
        cout << i << "^" << i;
        if (i < n) cout << " + ";
    }

    cout << " = " << sum << endl;

    // Выводим промежуточные вычисления
    cout << "\nПодробно:" << endl;
    for (int i = 1; i <= n; i++) {
        long long power = 1;
        for (int p = 0; p < i; p++) {
            power *= i;
        }
        cout << i << "^" << i << " = " << power << endl;
    }

    cout << "\nИтоговая сумма: " << sum << endl;
    return 0;
}