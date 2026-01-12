#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    setlocale(LC_ALL, "RU");

    int a, b, c, d;

    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "Введите c: ";
    cin >> c;
    cout << "Введите d: ";
    cin >> d;

    cout << "\nДо обмена:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "c = " << c << ", d = " << d << endl;

    // Обмен значений
    swap(a, b);
    swap(c, d);

    cout << "\nПосле обмена:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "c = " << c << ", d = " << d << endl;

    return 0;
}