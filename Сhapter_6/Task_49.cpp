#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0, product = 1, count = 0;
    int firstDigit = 0, lastDigit = n % 10;
    bool allSame = true;
    int prevDigit = -1;

    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;

        sum += digit;
        product *= digit;
        count++;

        if (temp < 10) {
            firstDigit = digit;
        }

        if (prevDigit != -1 && digit != prevDigit) {
            allSame = false;
        }
        prevDigit = digit;

        temp /= 10;
    }

    // а) сумма цифр больше 10
    if (sum > 10) cout << "Да" << endl;
    else cout << "Нет" << endl;

    // б) произведение цифр меньше 50
    if (product < 50) cout << "Да" << endl;
    else cout << "Нет" << endl;

    // в) количество цифр четное
    if (count % 2 == 0) cout << "Да" << endl;
    else cout << "Нет" << endl;

    // г) число четырехзначное
    if (n >= 1000 && n <= 9999) cout << "Да" << endl;
    else cout << "Нет" << endl;

    // д) первая цифра не превышает 6
    if (firstDigit <= 6) cout << "Да" << endl;
    else cout << "Нет" << endl;

    // е) начинается и заканчивается одной цифрой
    if (firstDigit == lastDigit) cout << "Да" << endl;
    else cout << "Нет" << endl;

    // ж) какая цифра больше: первая или последняя
    if (firstDigit > lastDigit) cout << "Первая" << endl;
    else if (firstDigit < lastDigit) cout << "Последняя" << endl;
    else cout << "Равны" << endl;

    return 0;
}