#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    int digits = 0;
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    bool increasing = true;
    int prevDigit = n / (int)pow(10, digits - 1);

    for (int i = digits - 2; i >= 0; i--) {
        int divisor = (int)pow(10, i);
        int currentDigit = (n / divisor) % 10;

        if (currentDigit <= prevDigit) {
            increasing = false;
            break;
        }
        prevDigit = currentDigit;
    }

    cout << "Последовательность цифр слева направо упорядочена по возрастанию: ";
    if (increasing) {
        cout << "Да" << endl;
    }
    else {
        cout << "Нет" << endl;
    }

    return 0;
}