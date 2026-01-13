#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    // Способ 1: с двумя циклами
    cout << "Способ 1 (два цикла):" << endl;

    // Первый цикл: находим максимальную цифру
    int maxDigit = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit > maxDigit) maxDigit = digit;
        temp /= 10;
    }

    // Второй цикл: считаем сколько раз встречается
    int count = 0;
    temp = n;
    while (temp > 0) {
        if (temp % 10 == maxDigit) count++;
        temp /= 10;
    }

    cout << "Максимальная цифра: " << maxDigit << endl;
    cout << "Встречается " << count << " раз" << endl;

    // Способ 2: с одним циклом
    cout << "\nСпособ 2 (один цикл):" << endl;

    maxDigit = 0;
    count = 0;
    temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
            count = 1;
        }
        else if (digit == maxDigit) {
            count++;
        }
        temp /= 10;
    }

    cout << "Максимальная цифра: " << maxDigit << endl;
    cout << "Встречается " << count << " раз" << endl;

    return 0;
}