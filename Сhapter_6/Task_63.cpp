#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    int original = n;
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    cout << "Оригинальное число: " << original << endl;
    cout << "Перевернутое число: " << reversed << endl;

    if (original == reversed) {
        cout << "Число является палиндромом" << endl;
    }
    else {
        cout << "Число не является палиндромом" << endl;
    }

    return 0;
}