#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;

    cout << "Введите два различных вещественных числа: ";
    cin >> a >> b;

    // Проверяем, что числа различные
    if (a == b) {
        cout << "Ошибка! Числа должны быть различными." << endl;
        return 1;
    }

    double max_num, min_num;

    // ЕДИНСТВЕННЫЙ условный оператор
    if (a > b) {
        max_num = a;
        min_num = b;
    }
    else {
        max_num = b;
        min_num = a;
    }

    cout << "Максимальное значение: " << max_num << endl;
    cout << "Минимальное значение: " << min_num << endl;

    return 0;
}