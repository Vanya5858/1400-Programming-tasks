#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b;

    cout << "Введите два целых числа a и b: ";
    cin >> a >> b;

    // Проверяем делимость без условных операторов
    int result = 1 - ((a % b) * (b % a));

    cout << "Результат: " << result << endl;

    return 0;
}