#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxDigit = 0, minDigit = 9;
    int maxPosFromStart = 0, minPosFromStart = 0;
    int position = 1;

    int temp = n;
    int totalDigits = 0;

    // Считаем общее количество цифр
    while (temp > 0) {
        totalDigits++;
        temp /= 10;
    }

    // Находим позиции
    temp = n;
    position = 1;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
            maxPosFromStart = totalDigits - position + 1;
        }
        if (digit < minDigit) {
            minDigit = digit;
            minPosFromStart = totalDigits - position + 1;
        }
        position++;
        temp /= 10;
    }

    if (maxPosFromStart < minPosFromStart) {
        cout << "Максимальная" << endl;
    }
    else {
        cout << "Минимальная" << endl;
    }

    return 0;
}