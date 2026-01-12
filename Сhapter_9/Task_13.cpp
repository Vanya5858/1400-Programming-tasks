#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int PARALLELS = 11;
    const int CLASSES = 4;
    int students[PARALLELS][CLASSES];
    char classLetters[] = { 'А', 'Б', 'В', 'Г' };

    // Ввод данных
    cout << "Введите количество учеников:" << endl;
    for (int i = 0; i < PARALLELS; i++) {
        cout << "Параллель " << (i + 1) << " (А Б В Г): ";
        for (int j = 0; j < CLASSES; j++) {
            cin >> students[i][j];
        }
    }

    // а) Численность самого малочисленного класса в каждой параллели
    cout << "\nа) Самый малочисленный класс в каждой параллели:" << endl;
    for (int i = 0; i < PARALLELS; i++) {
        int minInParallel = students[i][0];
        int minIndex = 0;
        for (int j = 1; j < CLASSES; j++) {
            if (students[i][j] < minInParallel) {
                minInParallel = students[i][j];
                minIndex = j;
            }
        }
        cout << "Параллель " << (i + 1) << ": класс " << classLetters[minIndex]
            << " (" << minInParallel << " учеников)" << endl;
    }

    // б) Численность самого малочисленного класса среди классов с каждой буквой
    cout << "\nб) Самый малочисленный класс для каждой буквы:" << endl;
    for (int j = 0; j < CLASSES; j++) {
        int minForLetter = students[0][j];
        int parallelIndex = 0;
        for (int i = 1; i < PARALLELS; i++) {
            if (students[i][j] < minForLetter) {
                minForLetter = students[i][j];
                parallelIndex = i;
            }
        }
        cout << "Классы " << classLetters[j] << ": параллель " << (parallelIndex + 1)
            << " (" << minForLetter << " учеников)" << endl;
    }

    return 0;
}