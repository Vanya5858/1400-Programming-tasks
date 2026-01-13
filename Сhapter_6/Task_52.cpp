#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    bool has3 = false, has2 = false, has5 = false;
    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        if (digit == 3) has3 = true;
        if (digit == 2) has2 = true;
        if (digit == 5) has5 = true;
        temp /= 10;
    }

    cout << "а) Есть ли цифра 3: " << (has3 ? "Да" : "Нет") << endl;
    cout << "б) Есть ли цифры 2 и 5: " << (has2 && has5 ? "Да" : "Нет") << endl;

    return 0;
}