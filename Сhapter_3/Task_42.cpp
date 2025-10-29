#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a2, a1, b;

    cout << "Введите цифры двузначного числа (десятки a2, единицы a1): ";
    cin >> a2 >> a1;

    cout << "Введите однозначное число b: ";
    cin >> b;

    // Вычисляем цифры результата БЕЗ условных операторов
    int c1 = (a1 + b) % 10;                    // единицы результата
    int c2 = a2 + (a1 + b) / 10;               // десятки результата

    cout << "\nЦифры результата суммы:\n";
    cout << "Десятки (c2): " << c2 << endl;
    cout << "Единицы (c1): " << c1 << endl;

    return 0;
}