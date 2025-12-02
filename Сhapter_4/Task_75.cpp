#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a3, a2, a1, b2, b1;
    cout << "Введите цифры трехзначного числа (сотни десятки единицы): ";
    cin >> a3 >> a2 >> a1;
    cout << "Введите цифры двузначного числа (десятки единицы): ";
    cin >> b2 >> b1;

    // Разность цифр a3a2a1 - b2b1, где a3a2a1 > b2b1

    int diff_units, diff_tens, diff_hundreds;
    int borrow1 = 0, borrow2 = 0;

    // Вычитаем единицы
    if (a1 >= b1) {
        diff_units = a1 - b1;
    }
    else {
        diff_units = 10 + a1 - b1;
        borrow1 = 1;
    }

    // Вычитаем десятки с учетом первого заема
    if (a2 >= b2 + borrow1) {
        diff_tens = a2 - b2 - borrow1;
    }
    else {
        diff_tens = 10 + a2 - b2 - borrow1;
        borrow2 = 1;
    }

    // Вычитаем сотни с учетом второго заема
    diff_hundreds = a3 - borrow2;

    cout << "Цифры разности: " << diff_hundreds << diff_tens << diff_units << endl;

    return 0;
}