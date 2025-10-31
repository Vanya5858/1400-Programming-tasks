#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;

    cout << "Введите два различных вещественных числа: ";
    cin >> a >> b;

    // Проверяем, что числа различные
    if (a == b) {
        cout << "Ошибка! Числа должны быть различными.\n";
        return 1;
    }

    // а) Какое число больше
    double max_num = a * (a > b) + b * (b > a);

    // б) Какое число меньше  
    double min_num = a * (a < b) + b * (b < a);

    cout << "а) Большее число: " << max_num << endl;
    cout << "б) Меньшее число: " << min_num << endl;

    return 0;
}