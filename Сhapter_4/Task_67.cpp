#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите шестизначное число: ";
    cin >> n;

    int first = n / 100000;
    int second = (n / 10000) % 10;
    int third = (n / 1000) % 10;
    int fourth = (n / 100) % 10;
    int fifth = (n / 10) % 10;
    int sixth = n % 10;

    int sum_first = first + second + third;
    int sum_last = fourth + fifth + sixth;

    if (sum_first == sum_last) {
        cout << "Число счастливое\n";
    }
    else {
        cout << "Число не счастливое\n";
    }

    return 0;
}