#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int PARALLELS = 11;
    const int CLASSES = 4;
    int students[PARALLELS][CLASSES];

    // Ввод данных
    cout << "Введите количество учеников:" << endl;
    for (int i = 0; i < PARALLELS; i++) {
        cout << "Параллель " << (i + 1) << " (А Б В Г): ";
        for (int j = 0; j < CLASSES; j++) {
            cin >> students[i][j];
        }
    }

    // а) Сколько учеников учится в самом малочисленном классе школы
    int minClass = students[0][0];
    for (int i = 0; i < PARALLELS; i++) {
        for (int j = 0; j < CLASSES; j++) {
            if (students[i][j] < minClass) {
                minClass = students[i][j];
            }
        }
    }
    cout << "\nа) В самом малочисленном классе: " << minClass << " учеников" << endl;

    // б) Минимальное значение общего количества учеников, учащихся в классах одной параллели
    int minParallel = 1000; // большое число
    for (int i = 0; i < PARALLELS; i++) {
        int parallelTotal = 0;
        for (int j = 0; j < CLASSES; j++) {
            parallelTotal += students[i][j];
        }
        if (parallelTotal < minParallel) {
            minParallel = parallelTotal;
        }
    }
    cout << "б) Самая маленькая параллель: " << minParallel << " учеников" << endl;

    // в) Минимальное значение общего количества учеников, учащихся в классах А, Б, В и Г
    int minLetterClass = 1000;
    for (int j = 0; j < CLASSES; j++) {
        int letterTotal = 0;
        for (int i = 0; i < PARALLELS; i++) {
            letterTotal += students[i][j];
        }
        if (letterTotal < minLetterClass) {
            minLetterClass = letterTotal;
        }
    }
    cout << "в) Меньше всего учеников в классах одной буквы: " << minLetterClass << endl;

    return 0;
}