#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    int count0 = 0, count9 = 0;
    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        if (digit == 0) count0++;
        if (digit == 9) count9++;
        temp /= 10;
    }

    cout << "Цифра 0 встречается " << count0 << " раз" << endl;
    cout << "Цифра 9 встречается " << count9 << " раз" << endl;

    if (count0 > count9) {
        cout << "Цифра 0 встречается чаще" << endl;
    }
    else if (count9 > count0) {
        cout << "Цифра 9 встречается чаще" << endl;
    }
    else {
        cout << "Цифры 0 и 9 встречаются одинаково часто" << endl;
    }

    return 0;
}