#include <iostream>
using namespace std;

// Функция для расчета суммы цифр трехзначного числа (вариант 1)
int sumOfThreeDigits(int num) {
    return (num / 100) + ((num / 10) % 10) + (num % 10);
}

// Функция для проверки, является ли число счастливым (вариант 2)
bool isLuckyNumber(int num) {
    int firstPart = num / 1000;        // Первые три цифры
    int secondPart = num % 1000;       // Последние три цифры

    return sumOfThreeDigits(firstPart) == sumOfThreeDigits(secondPart);
}

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Вариант 1: с одной функцией" << endl;
    int count1 = 0;

    for (int i = 100000; i <= 999999; i++) {
        int firstPart = i / 1000;
        int secondPart = i % 1000;

        if (sumOfThreeDigits(firstPart) == sumOfThreeDigits(secondPart)) {
            count1++;
        }
    }

    cout << "Количество шестизначных счастливых чисел: " << count1 << endl;

    cout << "\nВариант 2: с двумя функциями" << endl;
    int count2 = 0;

    for (int i = 100000; i <= 999999; i++) {
        if (isLuckyNumber(i)) {
            count2++;
        }
    }

    cout << "Количество шестизначных счастливых чисел: " << count2 << endl;

    return 0;
}