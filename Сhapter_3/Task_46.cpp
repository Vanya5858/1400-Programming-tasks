#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int k;

    cout << "Введите k (1 <= k <= 150): ";
    cin >> k;

    // Проверка диапазона
    if (k < 1 || k > 150) {
        cout << "Ошибка! k должно быть в диапазоне 1 <= k <= 150\n\n";
        return 1;
    }

    // Определяем, в каком числе находится k-я цифра
    int number = 100 + ((k + 2) / 3);

    // Определяем позицию цифры в числе (0 - первая, 1 - вторая, 2 - третья)
    int position = (k - 1) % 3;

    int kth_digit;

    // Определяем k-ю цифру в зависимости от условия
    if (k % 3 == 0) {
        // k кратно трем - третья цифра
        kth_digit = number % 10;
    }
    else if (k % 3 == 1) {
        // k = 1, 4, 7, ... - первая цифра
        kth_digit = number / 100;
    }
    else {
        // k = 2, 5, 8, ... - вторая цифра
        kth_digit = (number / 10) % 10;
    }

    cout << "\nk-я цифра находится в числе: " << number << endl;
    cout << "Позиция в числе: " << (position + 1) << "-я цифра\n";
    cout << k << "-я цифра последовательности: " << kth_digit << endl;

    return 0;
}