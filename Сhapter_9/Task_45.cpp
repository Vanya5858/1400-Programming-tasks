#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int m, n;
    cout << "Введите m: ";
    cin >> m;
    cout << "Введите n: ";
    cin >> n;

    cout << "\nЧисла меньше " << n << ", у которых квадрат суммы цифр равен " << m << ":" << endl;
    cout << "-------------------------------------------------------------" << endl;

    int count = 0;

    for (int num = 1; num < n; num++) {
        // Находим сумму цифр числа
        int sumDigits = 0;
        int temp = num;

        while (temp > 0) {
            sumDigits += temp % 10;
            temp /= 10;
        }

        // Проверяем условие
        if (sumDigits * sumDigits == m) {
            cout << num << " (сумма цифр: " << sumDigits << ", квадрат: " << m << ")" << endl;
            count++;
        }
    }

    if (count == 0) {
        cout << "Таких чисел нет" << endl;
    }
    else {
        cout << "\nВсего найдено: " << count << " чисел" << endl;
    }

    // Дополнительно: возможные значения суммы цифр
    cout << "\nВозможные суммы цифр (квадрат которых <= " << m << "):" << endl;
    for (int s = 1; s * s <= m; s++) {
        if (s * s == m) {
            cout << "Сумма цифр должна быть: " << s << endl;
        }
    }

    return 0;
}