#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b;
    cout << "Введите два целых числа: ";
    cin >> a >> b;

    if (a % b == 0 || b % a == 0) {
        cout << "Хотя бы одно число является делителем другого\n";
    }
    else {
        cout << "Ни одно число не является делителем другого\n";
    }

    return 0;
}