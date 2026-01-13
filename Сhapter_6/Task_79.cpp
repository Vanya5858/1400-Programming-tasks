#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    bool nonDecreasing = true;
    int prevDigit = n % 10;
    int temp = n / 10;

    while (temp > 0) {
        int currentDigit = temp % 10;
        if (currentDigit > prevDigit) {
            nonDecreasing = false;
            break;
        }
        prevDigit = currentDigit;
        temp /= 10;
    }

    cout << "Последовательность цифр справа налево упорядочена по неубыванию: ";
    if (nonDecreasing) {
        cout << "Да" << endl;
    }
    else {
        cout << "Нет" << endl;
    }

    return 0;
}