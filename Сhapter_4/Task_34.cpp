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

    // а) все цифры одинаковые
    if (first == second && second == third) {
        cout << "а) Все цифры одинаковые\n";
    }
    else {
        cout << "а) Цифры не все одинаковые\n";
    }

    // б) есть ли среди цифр одинаковые
    if (first == second || first == third || second == third) {
        cout << "б) Есть одинаковые цифры\n";
    }
    else {
        cout << "б) Все цифры различны\n";
    }

    return 0;
}