#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxDigit = 0, minDigit = 9;
    int maxPosFromEnd = 0, maxPosFromStart = 0;
    int minPosFromEnd = 0, minPosFromStart = 0;
    int position = 1;
    int temp = n;

    // Находим максимальную и минимальную цифры
    while (temp > 0) {
        int digit = temp % 10;
        if (digit > maxDigit) maxDigit = digit;
        if (digit < minDigit) minDigit = digit;
        temp /= 10;
    }

    // Находим позиции
    temp = n;
    position = 1;
    int totalDigits = 0;

    // Сначала считаем общее количество цифр
    int temp2 = n;
    while (temp2 > 0) {
        totalDigits++;
        temp2 /= 10;
    }

    // Теперь находим позиции
    while (temp > 0) {
        int digit = temp % 10;
        if (digit == maxDigit && maxPosFromEnd == 0) {
            maxPosFromEnd = position;
            maxPosFromStart = totalDigits - position + 1;
        }
        if (digit == minDigit && minPosFromEnd == 0) {
            minPosFromEnd = position;
            minPosFromStart = totalDigits - position + 1;
        }
        position++;
        temp /= 10;
    }

    cout << "а) " << maxPosFromEnd << " " << maxPosFromStart << endl;
    cout << "б) " << minPosFromEnd << " " << minPosFromStart << endl;

    return 0;
}