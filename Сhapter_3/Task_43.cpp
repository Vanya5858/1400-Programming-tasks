#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    int a2, a1, b2, b1;

    cout << "Введите цифры первого числа (десятки a2, единицы a1): ";
    cin >> a2 >> a1;

    cout << "Введите цифры второго числа (десятки b2, единицы b1): ";
    cin >> b2 >> b1;

    // Вычисляем цифры результата БЕЗ условных операторов
    int sum_units = a1 + b1;                   // сумма единиц
    int c1 = sum_units % 10;                   // единицы результата
    int carry = sum_units / 10;                // перенос из единиц в десятки

    int sum_tens = a2 + b2 + carry;            // сумма десятков с переносом
    int c2 = sum_tens % 10;                    // десятки результата

    cout << "\nЦифры результата суммы:\n";
    cout << "Десятки (c2): " << c2 << endl;
    cout << "Единицы (c1): " << c1 << endl;

    return 0;
}