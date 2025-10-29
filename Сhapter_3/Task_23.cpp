#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;

    cout << "Введите трехзначное число: ";
    cin >> number;

    if (number >= 100 && number <= 999) {
        int newNumber = (number % 10) * 100 + (number / 10);
        cout << "Исходное число: " << number << endl;
        cout << "Полученное число: " << newNumber << endl;
    }
    else {
        cout << "Ошибка! Введите трехзначное число (100-999)\n";
    }

    return 0;
}