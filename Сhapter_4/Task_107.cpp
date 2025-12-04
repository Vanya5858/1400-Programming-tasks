#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b, c;
    cout << "Введите три целых числа: ";
    cin >> a >> b >> c;

    cout << "Четные числа: ";
    if (a % 2 == 0) cout << a << " ";
    if (b % 2 == 0) cout << b << " ";
    if (c % 2 == 0) cout << c << " ";
    cout << endl;

    return 0;
}