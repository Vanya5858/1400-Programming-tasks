#include <iostream>
using namespace std;

// Функция для нахождения НОД двух чисел (алгоритм Евклида)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите количество чисел n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Некорректное количество чисел" << endl;
        return 0;
    }

    int numbers[100]; // Максимум 100 чисел

    cout << "Введите " << n << " натуральных чисел: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // Находим НОД всех чисел
    int result = numbers[0];
    for (int i = 1; i < n; i++) {
        result = gcd(result, numbers[i]);
    }

    cout << "\nНаибольший общий делитель: " << result << endl;

    // Выводим процесс вычисления
    cout << "\nПроцесс вычисления:" << endl;
    if (n >= 2) {
        int current = gcd(numbers[0], numbers[1]);
        cout << "НОД(" << numbers[0] << ", " << numbers[1] << ") = " << current << endl;

        for (int i = 2; i < n; i++) {
            int next = gcd(current, numbers[i]);
            cout << "НОД(" << current << ", " << numbers[i] << ") = " << next << endl;
            current = next;
        }
    }

    return 0;
}