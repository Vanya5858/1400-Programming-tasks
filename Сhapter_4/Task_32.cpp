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

    int sum_cubes = first * first * first + second * second * second + third * third * third;

    if (n * n == sum_cubes) {
        cout << "Квадрат числа равен сумме кубов его цифр\n";
    }
    else {
        cout << "Квадрат числа НЕ равен сумме кубов его цифр\n";
    }

    return 0;
}