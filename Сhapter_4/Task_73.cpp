#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a2, a1, b;
    cout << "Введите цифры двузначного числа (десятки единицы): ";
    cin >> a2 >> a1;
    cout << "Введите однозначное число: ";
    cin >> b;

    // Разность цифр без формирования чисел
    // a2a1 - b, где a2a1 > b и результат двузначный

    int diff_units;
    int borrow = 0;

    // Вычитаем единицы
    if (a1 >= b) {
        diff_units = a1 - b;
    }
    else {
        diff_units = 10 + a1 - b;
        borrow = 1;
    }

    // Вычитаем десятки с учетом заема
    int diff_tens = a2 - borrow;

    cout << "Цифры разности: " << diff_tens << diff_units << endl;

    return 0;
}