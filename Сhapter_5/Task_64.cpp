#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;

    cout << "Введите семизначное число: ";
    cin >> number;

    int reversed = 0;
    int temp = number;

    for (int i = 0; i < 7; i++) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    cout << "Исходное число: " << number << endl;
    cout << "Перевернутое число: " << reversed << endl;

    return 0;
}