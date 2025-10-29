#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;

    cout << "Введите трехзначное число: ";
    cin >> number;

    if (number >= 100 && number <= 999) {
        int reversed = (number % 10) * 100 + ((number / 10) % 10) * 10 + (number / 100);
        cout << "Исходное число: " << number << endl;
        cout << "Число справа налево: " << reversed << endl;
    }
    else {
        cout << "Ошибка! Введите трехзначное число (100-999)\n";
    }

    return 0;
}