#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    // Способ 1: с двумя циклами
    cout << "Способ 1 (два цикла):" << endl;

    // Первый цикл: находим минимальную цифру
    int minDigit = 9;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit < minDigit) minDigit = digit;
        temp /= 10;
    }

    // Второй цикл: считаем сколько раз встречается
    int count = 0;
    temp = n;
    while (temp > 0) {
        if (temp % 10 == minDigit) count++;
        temp /= 10;
    }

    cout << "Минимальная цифра: " << minDigit << endl;
    cout << "Встречается " << count << " раз" << endl;

    // Способ 2: с одним циклом
    cout << "\nСпособ 2 (один цикл):" << endl;

    minDigit = 9;
    count = 0;
    temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        if (digit < minDigit) {
            minDigit = digit;
            count = 1;
        }
        else if (digit == minDigit) {
            count++;
        }
        temp /= 10;
    }

    cout << "Минимальная цифра: " << minDigit << endl;
    cout << "Встречается " << count << " раз" << endl;

    return 0;
}