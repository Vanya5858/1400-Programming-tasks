#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int k, n;

    // а) Найти k-й член
    cout << "Введите k для k-го члена: ";
    cin >> k;

    if (k < 1) {
        cout << "Ошибка: k должно быть >= 1!\n";
        return 1;
    }

    long long num_prev = 1, den_prev = 1;  // 1-й член: 1/1
    long long num_curr = 2, den_curr = 1;  // 2-й член: 2/1

    if (k == 1) {
        cout << "а) " << k << "-й член: " << num_prev << "/" << den_prev << endl;
    }
    else if (k == 2) {
        cout << "а) " << k << "-й член: " << num_curr << "/" << den_curr << endl;
    }
    else {
        for (int i = 3; i <= k; i++) {
            long long num_next = num_prev + num_curr;
            long long den_next = den_prev + den_curr;

            num_prev = num_curr;
            den_prev = den_curr;
            num_curr = num_next;
            den_curr = den_next;
        }
        cout << "а) " << k << "-й член: " << num_curr << "/" << den_curr << endl;
    }

    // б) Получить первые n членов
    cout << "\nВведите n для первых n членов: ";
    cin >> n;

    if (n < 1) {
        cout << "Ошибка: n должно быть >= 1!\n";
        return 1;
    }

    cout << "б) Первые " << n << " членов последовательности:" << endl;

    // Сбрасываем для нового расчета
    num_prev = 1; den_prev = 1;
    num_curr = 2; den_curr = 1;

    if (n >= 1) {
        cout << "1-й: " << num_prev << "/" << den_prev << endl;
    }
    if (n >= 2) {
        cout << "2-й: " << num_curr << "/" << den_curr << endl;
    }

    for (int i = 3; i <= n; i++) {
        long long num_next = num_prev + num_curr;
        long long den_next = den_prev + den_curr;

        cout << i << "-й: " << num_next << "/" << den_next << endl;

        num_prev = num_curr;
        den_prev = den_curr;
        num_curr = num_next;
        den_curr = den_next;
    }

    return 0;
}