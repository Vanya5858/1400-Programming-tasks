#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    // Часть А: сложение 20-значных чисел
    cout << "=== ЧАСТЬ А: СЛОЖЕНИЕ 20-ЗНАЧНЫХ ЧИСЕЛ ===\n\n";

    const int SIZE_A = 20;
    int num1_a[SIZE_A] = { 0 }, num2_a[SIZE_A] = { 0 }, sum_a[SIZE_A + 1] = { 0 };
    string input1_a, input2_a;

    cout << "Введите первое 20-значное число: ";
    cin >> input1_a;
    cout << "Введите второе 20-значное число: ";
    cin >> input2_a;

    // Заполняем массивы (цифры хранятся в обратном порядке)
    for (int i = 0; i < SIZE_A; i++) {
        num1_a[i] = input1_a[SIZE_A - 1 - i] - '0';
        num2_a[i] = input2_a[SIZE_A - 1 - i] - '0';
    }

    // Сложение
    int carry = 0;
    for (int i = 0; i < SIZE_A; i++) {
        int temp = num1_a[i] + num2_a[i] + carry;
        sum_a[i] = temp % 10;
        carry = temp / 10;
    }
    sum_a[SIZE_A] = carry; // Последний перенос

    // Вывод результата
    cout << "Результат сложения: ";
    if (sum_a[SIZE_A] != 0) cout << sum_a[SIZE_A];
    for (int i = SIZE_A - 1; i >= 0; i--) {
        cout << sum_a[i];
    }

    // Часть Б: вычитание 30-значных чисел
    cout << "\n\n=== ЧАСТЬ Б: ВЫЧИТАНИЕ 30-ЗНАЧНЫХ ЧИСЕЛ ===\n\n";

    const int SIZE_B = 30;
    int num1_b[SIZE_B] = { 0 }, num2_b[SIZE_B] = { 0 }, diff_b[SIZE_B] = { 0 };
    string input1_b, input2_b;

    cout << "Введите первое 30-значное число: ";
    cin >> input1_b;
    cout << "Введите второе 30-значное число: ";
    cin >> input2_b;

    // Определяем, какое число больше
    bool isNegative = false;
    if (input1_b.length() < input2_b.length() ||
        (input1_b.length() == input2_b.length() && input1_b < input2_b)) {
        swap(input1_b, input2_b);
        isNegative = true;
    }

    // Заполняем массивы (цифры хранятся в обратном порядке)
    for (int i = 0; i < SIZE_B; i++) {
        num1_b[i] = input1_b[SIZE_B - 1 - i] - '0';
        num2_b[i] = input2_b[SIZE_B - 1 - i] - '0';
    }

    // Вычитание
    int borrow = 0;
    for (int i = 0; i < SIZE_B; i++) {
        int temp = num1_b[i] - num2_b[i] - borrow;
        if (temp < 0) {
            temp += 10;
            borrow = 1;
        }
        else {
            borrow = 0;
        }
        diff_b[i] = temp;
    }

    // Вывод результата
    cout << "Результат вычитания: ";
    if (isNegative) cout << "-";

    // Пропускаем ведущие нули
    bool leadingZero = true;
    for (int i = SIZE_B - 1; i >= 0; i--) {
        if (diff_b[i] != 0) leadingZero = false;
        if (!leadingZero) cout << diff_b[i];
    }

    if (leadingZero) cout << "0";

    cout << "\n";
    return 0;
}