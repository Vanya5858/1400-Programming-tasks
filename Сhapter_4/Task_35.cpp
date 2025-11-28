#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, a;
    cout << "Введите четырехзначное число: ";
    cin >> n;
    cout << "Введите число a: ";
    cin >> a;

    int first = n / 1000;
    int second = (n / 100) % 10;
    int third = (n / 10) % 10;
    int fourth = n % 10;

    int sum_first_two = first + second;
    int sum_last_two = third + fourth;
    int sum_all = first + second + third + fourth;
    int product_all = first * second * third * fourth;

    // а) равна ли сумма первых двух цифр сумме последних двух
    if (sum_first_two == sum_last_two) {
        cout << "а) Сумма первых двух цифр равна сумме последних двух\n";
    }
    else {
        cout << "а) Сумма первых двух цифр не равна сумме последних двух\n";
    }

    // б) кратна ли трем сумма цифр
    if (sum_all % 3 == 0) {
        cout << "б) Сумма цифр кратна трем\n";
    }
    else {
        cout << "б) Сумма цифр не кратна трем\n";
    }

    // в) кратно ли четырем произведение цифр
    if (product_all % 4 == 0) {
        cout << "в) Произведение цифр кратно четырем\n";
    }
    else {
        cout << "в) Произведение цифр не кратно четырем\n";
    }

    // г) кратно ли произведение цифр числу a
    if (product_all % a == 0) {
        cout << "г) Произведение цифр кратно " << a << endl;
    }
    else {
        cout << "г) Произведение цифр не кратно " << a << endl;
    }

    return 0;
}