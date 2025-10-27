#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int N, k;

    // Ввод данных
    cout << "Введите количество школьников N: ";
    cin >> N;
    cout << "Введите количество яблок k: ";
    cin >> k;

    // Проверка корректности данных
    if (N <= 0) {
        cout << "Ошибка: количество школьников должно быть положительным!\n\n";
        return 1;
    }
    if (k < 0) {
        cout << "Ошибка: количество яблок не может быть отрицательным!\n\n";
        return 1;
    }

    // Вычисление результатов
    int apples_per_student = k / N;
    int apples_left = k % N;

    // Вывод результатов
    cout << "\nРезультат деления:\n";
    cout << "Каждому школьнику достанется: " << apples_per_student << " яблок\n";
    cout << "В корзинке останется: " << apples_left << " яблок\n\n";

    return 0;
}