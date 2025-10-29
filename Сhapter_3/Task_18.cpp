#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;

    cout << "Введите двузначное число: ";
    cin >> number;

    if (number >= 10 && number <= 99) {
        int reversedNumber = (number % 10) * 10 + (number / 10);
        cout << "Исходное число: " << number << endl;
        cout << "Число после перестановки: " << reversedNumber << endl;
    }
    else {
        cout << "Ошибка! Введите двузначное число (10-99)\n";
    }

    return 0;
}