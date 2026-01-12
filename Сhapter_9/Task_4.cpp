#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int STUDENTS = 12;
    const int SUBJECTS = 3;
    int grades[STUDENTS][SUBJECTS];
    int totalSum = 0;

    // Вариант 1: ввод по строкам (по ученикам)
    cout << "\nВариант 1 - ввод по ученикам:" << endl;
    for (int i = 0; i < STUDENTS; i++) {
        cout << "Ученик " << (i + 1) << ": ";
        for (int j = 0; j < SUBJECTS; j++) {
            cin >> grades[i][j];
            totalSum += grades[i][j];
        }
    }
    cout << "Общая сумма оценок: " << totalSum << endl;

    // Сброс суммы для второго варианта
    totalSum = 0;

    // Вариант 2: ввод по столбцам (по предметам)
    cout << "\nВариант 2 - ввод по предметам:" << endl;
    for (int j = 0; j < SUBJECTS; j++) {
        cout << "Предмет " << (j + 1) << ": ";
        for (int i = 0; i < STUDENTS; i++) {
            cin >> grades[i][j];
            totalSum += grades[i][j];
        }
    }
    cout << "Общая сумма оценок: " << totalSum << endl;

    return 0;
}