#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // а) Все целые числа от 20 до 35
    cout << "а) Все целые числа от 20 до 35:\n";
    for (int i = 20; i <= 35; i++) {
        cout << i << endl;
    }
    cout << endl;

    // б) Квадраты всех целых чисел от a до 50
    int a;
    cout << "б) Введите a (a <= 50): ";
    cin >> a;
    cout << "Квадраты чисел от " << a << " до 50:\n";
    for (int i = a; i <= 50; i++) {
        cout << i << "^2 = " << i * i << endl;
    }
    cout << endl;

    // в) Кубы всех целых чисел от 10 до b
    int b;
    cout << "в) Введите b (b >= 10): ";
    cin >> b;
    cout << "Кубы чисел от 10 до " << b << ":\n";
    for (int i = 10; i <= b; i++) {
        cout << i << "^3 = " << i * i * i << endl;
    }
    cout << endl;

    // г) Все целые числа от a до b
    int a2, b2;
    cout << "г) Введите a и b, через пробел (b >= a): ";
    cin >> a2 >> b2;
    cout << "Все целые числа от " << a2 << " до " << b2 << ":\n";
    for (int i = a2; i <= b2; i++) {
        cout << i << endl;
    }

    return 0;
}