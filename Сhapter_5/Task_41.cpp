#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    long long number;
    int n;

    cout << "Введите натуральное число: ";
    cin >> number;

    if (number <= 0) {
        cout << "Ошибка: число должно быть положительным!\n";
        return 1;
    }

    cout << "Введите n его последних цифр: ";
    cin >> n;

    if (n <= 0) {
        cout << "Ошибка: n должно быть положительным!\n";
        return 1;
    }

    int sum = 0;
    long long product = 1;
    int count = 0;

    while (number > 0 && count < n) {
        int digit = number % 10;
        sum += digit;
        product *= digit;
        number /= 10;
        count++;
    }

    // Если n больше количества цифр в числе
    if (count < n) {
        cout << "Предупреждение: в числе только " << count << " цифр\n";
    }

    cout << "Сумма последних " << (count < n ? count : n) << " цифр: " << sum << endl;
    cout << "Произведение последних " << (count < n ? count : n) << " цифр: " << product << endl;

    return 0;
}