#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите четырехзначное число: ";
    cin >> n;

    int first = n / 1000;
    int second = (n / 100) % 10;
    int third = (n / 10) % 10;
    int fourth = n % 10;

    if (first == fourth && second == third) {
        cout << "Запись числа симметрична\n";
    }
    else {
        cout << "Запись числа не симметрична\n";
    }

    return 0;
}