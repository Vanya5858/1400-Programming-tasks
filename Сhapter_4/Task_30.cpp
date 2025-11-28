#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите трехзначное число: ";
    cin >> n;

    int first = n / 100;
    int last = n % 10;

    if (first == last) {
        cout << "Число является палиндромом\n";
    }
    else {
        cout << "Число не является палиндромом\n";
    }

    return 0;
}