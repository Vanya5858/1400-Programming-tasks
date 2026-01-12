#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int students;
    int grades[100];

    cout << "Введите количество учеников в классе: ";
    cin >> students;

    if (students == 0) {
        cout << "В классе нет учеников!\n";
        return 0;
    }

    cout << "Введите оценки по информатике для " << students << " учеников:\n";
    cout << "(в начале все пятерки, затем остальные оценки)\n";

    for (int i = 0; i < students; i++) {
        cout << "Ученик " << i + 1 << ": ";
        cin >> grades[i];
    }

    // Подсчитываем пятерки
    int fivesCount = 0;

    // Идем от начала до первой не пятерки
    while (fivesCount < students && grades[fivesCount] == 5) {
        fivesCount++;
    }

    // Выводим результаты
    cout << "\nРезультаты:\n";
    cout << "Количество учеников с оценкой '5': " << fivesCount << endl;

    if (fivesCount == students) {
        cout << "Все ученики имеют оценку '5'!\n";
    }
    else {
        cout << "Оценки после пятерок:\n";
        for (int i = fivesCount; i < students; i++) {
            cout << "Ученик " << i + 1 << ": " << grades[i] << endl;
        }
    }

    return 0;
}