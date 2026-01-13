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
            maxPosFromEnd = position;
            maxPosFromStart = totalDigits - position + 1;
        }
        if (digit < minDigit) {
            minDigit = digit;
            minPosFromEnd = position;
            minPosFromStart = totalDigits - position + 1;
        }
        position++;
        temp /= 10;
    }

    cout << "а) " << maxPosFromEnd << " " << minPosFromEnd << endl;
    cout << "б) " << maxPosFromStart << " " << minPosFromStart << endl;

    return 0;
}