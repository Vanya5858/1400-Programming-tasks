#include <iostream>
using namespace std;

// Функция проверки, является ли число палиндромом
bool isPalindrome(int num) {
    if (num < 0) return false;

    int original = num;
    int reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    setlocale(LC_ALL, "RU");

    int a, b;

    cout << "Введите два натуральных числа:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    bool isAPalindrome = isPalindrome(a);
    bool isBPalindrome = isPalindrome(b);

    cout << "\nРезультат:" << endl;
    cout << "Число " << a << (isAPalindrome ? " является" : " не является") << " палиндромом" << endl;
    cout << "Число " << b << (isBPalindrome ? " является" : " не является") << " палиндромом" << endl;

    if (isAPalindrome || isBPalindrome) {
        cout << "Хотя бы одно из чисел является палиндромом" << endl;
    }
    else {
        cout << "Ни одно из чисел не является палиндромом" << endl;
    }

    return 0;
}