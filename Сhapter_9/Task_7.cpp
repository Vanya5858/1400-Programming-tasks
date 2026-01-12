#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int STUDENTS = 15;
    const int SUBJECTS = 3;
    int grades[STUDENTS][SUBJECTS];

    // Ввод данных
    cout << "Введите оценки (от 2 до 5):" << endl;
    for (int i = 0; i < STUDENTS; i++) {
        cout << "Ученик " << (i + 1) << ": ";
        for (int j = 0; j < SUBJECTS; j++) {
            cin >> grades[i][j];
        }
    }

    // а) Общее количество пятерок в таблице
    int fives = 0;
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < SUBJECTS; j++) {
            if (grades[i][j] == 5) fives++;
        }
    }
    cout << "\nа) Всего пятерок: " << fives << endl;

    // б) Количество троек у каждого ученика
    cout << "\nб) Количество троек у каждого ученика:" << endl;
    for (int i = 0; i < STUDENTS; i++) {
        int threes = 0;
        for (int j = 0; j < SUBJECTS; j++) {
            if (grades[i][j] == 3) threes++;
        }
        cout << "Ученик " << (i + 1) << ": " << threes << endl;
    }

    // в) Количество двоек по каждому предмету
    cout << "\nв) Количество двоек по предметам:" << endl;
    for (int j = 0; j < SUBJECTS; j++) {
        int twos = 0;
        for (int i = 0; i < STUDENTS; i++) {
            if (grades[i][j] == 2) twos++;
        }
        cout << "Предмет " << (j + 1) << ": " << twos << endl;
    }

    return 0;
}