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

    // а) является ли сумма цифр двузначным числом
    if (sum >= 10) {
        cout << "а) Сумма цифр(" << sum << ") является двузначным числом\n";
    }
    else {
        cout << "а) Сумма цифр(" << sum << ") не является двузначным числом\n";
    }

    // б) больше ли числа a сумма цифр
    if (sum > a) {
        cout << "б) Сумма цифр(" << sum <<") больше " << a << endl;
    }
    else {
        cout << "б) Сумма цифр(" << sum << ") не больше " << a << endl;
    }

    return 0;
}