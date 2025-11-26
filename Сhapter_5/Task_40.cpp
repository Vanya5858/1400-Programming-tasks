#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    long long number;
    cout << "Введите 9-значное число: ";
    cin >> number;

    int sum = 0;

    // Последовательно извлекаем цифры справа налево
    while (number > 0) {
        sum += number % 10;  // получаем последнюю цифру
        number /= 10;        // удаляем последнюю цифру
    }

    cout << "Сумма цифр: " << sum << endl;

    return 0;
}