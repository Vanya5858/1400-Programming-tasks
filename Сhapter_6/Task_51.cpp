#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, k, b, x, y, a, m, n2;

    cout << "Введите число n: ";
    cin >> n;
    cout << "Введите k, b, x, y, a, m, n2: ";
    cin >> k >> b >> x >> y >> a >> m >> n2;

    int sum = 0, product = 1, count = 0;
    int firstDigit = 0, lastDigit = n % 10;
    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        product *= digit;
        count++;

        if (temp < 10) {
            firstDigit = digit;
        }

        temp /= 10;
    }

    cout << "a) Сумма цифр > " << k << " и число четное: ";
    if (sum > k && n % 2 == 0) cout << "Да" << endl;
    else cout << "Нет" << endl;

    cout << "б) Количество цифр четное и число <= " << b << ": ";
    if (count % 2 == 0 && n <= b) cout << "Да" << endl;
    else cout << "Нет" << endl;

    cout << "г) Начинается цифрой " << x << " и заканчивается цифрой " << y << ": ";
    if (firstDigit == x && lastDigit == y) cout << "Да" << endl;
    else cout << "Нет" << endl;

    cout << "д) Произведение цифр < " << a << " и число делится на " << b << ": ";
    if (product < a && n % b == 0) cout << "Да" << endl;
    else cout << "Нет" << endl;

    cout << "е) Сумма цифр > " << m << " и число делится на " << n2 << ": ";
    if (sum > m && n % n2 == 0) cout << "Да" << endl;
    else cout << "Нет" << endl;

    return 0;
}