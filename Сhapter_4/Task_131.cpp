#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a1, b1, c1, a2, b2, c2;
    cout << "Введите первую тройку чисел: ";
    cin >> a1 >> b1 >> c1;
    cout << "Введите вторую тройку чисел: ";
    cin >> a2 >> b2 >> c2;

    // Находим средние числа в каждой тройке
    double middle1, middle2;

    // Для первой тройки
    if ((a1 > b1 && a1 < c1) || (a1 < b1 && a1 > c1)) middle1 = a1;
    else if ((b1 > a1 && b1 < c1) || (b1 < a1 && b1 > c1)) middle1 = b1;
    else middle1 = c1;

    // Для второй тройки
    if ((a2 > b2 && a2 < c2) || (a2 < b2 && a2 > c2)) middle2 = a2;
    else if ((b2 > a2 && b2 < c2) || (b2 < a2 && b2 > c2)) middle2 = b2;
    else middle2 = c2;

    cout << "Среднее арифметическое средних чисел: " << (middle1 + middle2) / 2 << endl;

    return 0;
}