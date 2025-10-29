#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int k;

    cout << "Введите k (1 <= k <= 180): ";
    cin >> k;

    // Проверка диапазона
    if (k < 1 || k > 180) {
        cout << "Ошибка! k должно быть в диапазоне 1 <= k <= 180\n\n";
        return 1;
    }

    // а) Номер пары цифр (порядковый номер двузначного числа)
    int pair_number = (k + 1) / 2;

    // б) Двузначное число
    int two_digit_number = 9 + ((k + 1) / 2);

    // в) k-я цифра
    int kth_digit;
    if (k % 2 == 1) {  // нечетное k
        kth_digit = two_digit_number / 10;  // первая цифра
    }
    else {           // четное k
        kth_digit = two_digit_number % 10;  // вторая цифра
    }

    cout << "\nРезультаты:\n";
    cout << "k = " << k << endl;
    cout << "а) Номер пары цифр: " << pair_number << endl;
    cout << "б) Двузначное число: " << two_digit_number << endl;
    cout << "в) " << k << "-я цифра: " << kth_digit << endl << endl;

    return 0;
}