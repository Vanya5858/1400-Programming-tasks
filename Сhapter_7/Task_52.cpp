#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int b, sumGreater20 = 0, sumLess50 = 0;

    cout << "Введите 14 целых чисел: ";
    for (int i = 0; i < 14; i++) {
        cin >> b;

        // Для пункта а: сумма чисел > 20
        if (b > 20)
            sumGreater20 += b;

        // Для пункта б: сумма чисел < 50
        if (b < 50)
            sumLess50 += b;
    }

    // Вывод результатов
    cout << "\nа) Сумма чисел больше 20 = " << sumGreater20;
    cout << " - " << (sumGreater20 > 100 ? "Верно: сумма > 100" : "Неверно: сумма ≤ 100") << endl;

    cout << "б) Сумма чисел меньше 50 = " << sumLess50;
    cout << " - " << (sumLess50 % 2 == 0 ? "Верно: сумма чётная" : "Неверно: сумма нечётная") << endl;

    return 0;
}