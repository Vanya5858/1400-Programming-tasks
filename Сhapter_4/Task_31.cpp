#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите трехзначное число: ";
    cin >> n;

    int first = n / 100;
    int second = (n / 10) % 10;
    int third = n % 10;

    // а) первая или последняя цифра
    if (first > third) {
        cout << "а) Первая цифра больше последней\n";
    }
    else if (third > first) {
        cout << "а) Последняя цифра больше первой\n";
    }
    else {
        cout << "а) Первая и последняя цифры равны\n";
    }

    // б) первая или вторая цифра
    if (first > second) {
        cout << "б) Первая цифра больше второй\n";
    }
    else if (second > first) {
        cout << "б) Вторая цифра больше первой\n";
    }
    else {
        cout << "б) Первая и вторая цифры равны\n";
    }

    // в) вторая или последняя цифра
    if (second > third) {
        cout << "в) Вторая цифра больше последней\n";
    }
    else if (third > second) {
        cout << "в) Последняя цифра больше второй\n";
    }
    else {
        cout << "в) Вторая и последняя цифры равны\n";
    }

    return 0;
}