#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, a;
    cout << "Введите двузначное число: ";
    cin >> n;
    cout << "Введите число a: ";
    cin >> a;

    int first = n / 10;
    int second = n % 10;
    int sum = first + second;

    // а) кратна ли трем сумма цифр
    if (sum % 3 == 0) {
        cout << "а) Сумма цифр(" << sum << ") кратна трем\n";
    }
    else {
        cout << "а) Сумма цифр(" << sum << ") не кратна трем\n";
    }

    // б) кратна ли сумма цифр числу a
    if (sum % a == 0) {
        cout << "б) Сумма цифр(" << sum << ") кратна " << a << endl;
    }
    else {
        cout << "б) Сумма цифр(" << sum << ") не кратна " << a << endl;
    }

    return 0;
}