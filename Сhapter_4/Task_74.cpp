#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a2, a1, b2, b1;
    cout << "Введите цифры первого числа (десятки единицы): ";
    cin >> a2 >> a1;
    cout << "Введите цифры второго числа (десятки единицы): ";
    cin >> b2 >> b1;

    // Разность цифр a2a1 - b2b1, где a2a1 > b2b1

    int diff_units, diff_tens;
    int borrow = 0;

    // Вычитаем единицы
    if (a1 >= b1) {
        diff_units = a1 - b1;
    }
    else {
        diff_units = 10 + a1 - b1;
        borrow = 1;
    }

    // Вычитаем десятки с учетом заема
    if (a2 >= b2 + borrow) {
        diff_tens = a2 - b2 - borrow;
    }
    else {
        diff_tens = 10 + a2 - b2 - borrow;
    }

    cout << "Цифры разности: " << diff_tens << diff_units << endl;

    return 0;
}