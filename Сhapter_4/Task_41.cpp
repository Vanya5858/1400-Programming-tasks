#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    if (n >= 10 && n <= 99) {
        cout << "Число является двузначным\n";
    }
    else {
        cout << "Число не является двузначным\n";
    }

    return 0;
}