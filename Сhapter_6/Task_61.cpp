#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите натуральное число (все цифры различны): ";
    cin >> n;

    int max1 = -1, max2 = -1;
    int max1PosEnd = -1, max2PosEnd = -1;
    int max1PosStart = -1, max2PosStart = -1;
    int min1 = 10, min2 = 10;
    int min1PosEnd = -1, min2PosEnd = -1;
    int min1PosStart = -1, min2PosStart = -1;

    int position = 1;
    int temp = n;
    int totalDigits = 0;

    while (temp > 0) {
        totalDigits++;
        temp /= 10;
    }

    temp = n;
    position = 1;

    while (temp > 0) {
        int digit = temp % 10;
        int posFromStart = totalDigits - position + 1;

        if (digit > max1) {
            max2 = max1;
            max2PosEnd = max1PosEnd;
            max2PosStart = max1PosStart;

            max1 = digit;
            max1PosEnd = position;
            max1PosStart = posFromStart;
        }
        else if (digit > max2) {
            max2 = digit;
            max2PosEnd = position;
            max2PosStart = posFromStart;
        }

        if (digit < min1) {
            min2 = min1;
            min2PosEnd = min1PosEnd;
            min2PosStart = min1PosStart;

            min1 = digit;
            min1PosEnd = position;
            min1PosStart = posFromStart;
        }
        else if (digit < min2) {
            min2 = digit;
            min2PosEnd = position;
            min2PosStart = posFromStart;
        }

        position++;
        temp /= 10;
    }

    cout << "а) Порядковые номера двух максимальных цифр:" << endl;
    cout << "   - от конца: " << max1PosEnd << " и " << max2PosEnd << endl;
    cout << "   - от начала: " << max1PosStart << " и " << max2PosStart << endl;

    cout << "б) Порядковые номера двух минимальных цифр:" << endl;
    cout << "   - от конца: " << min1PosEnd << " и " << min2PosEnd << endl;
    cout << "   - от начала: " << min1PosStart << " и " << min2PosStart << endl;

    return 0;
}