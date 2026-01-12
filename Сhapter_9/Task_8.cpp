#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int STUDENTS = 14;
    const int SUBJECTS = 3;
    int grades[STUDENTS][SUBJECTS];

    // Ввод данных
    cout << "Введите оценки (от 2 до 5):" << endl;
    for (int i = 0; i < STUDENTS; i++) {
        cout << "Студент " << (i + 1) << ": ";
        for (int j = 0; j < SUBJECTS; j++) {
            cin >> grades[i][j];
        }
    }

    // а) Количество студентов, сдавших сессию без двоек
    int noTwos = 0;
    for (int i = 0; i < STUDENTS; i++) {
        bool hasTwo = false;
        for (int j = 0; j < SUBJECTS; j++) {
            if (grades[i][j] == 2) {
                hasTwo = true;
                break;
            }
        }
        if (!hasTwo) noTwos++;
    }
    cout << "\nа) Сдали без двоек: " << noTwos << " студентов" << endl;

    // б) Количество предметов, по которым были получены только оценки «5» и «4»
    int goodSubjects = 0;
    for (int j = 0; j < SUBJECTS; j++) {
        bool onlyGood = true;
        for (int i = 0; i < STUDENTS; i++) {
            if (grades[i][j] != 5 && grades[i][j] != 4) {
                onlyGood = false;
                break;
            }
        }
        if (onlyGood) goodSubjects++;
    }
    cout << "б) Предметов только с 5 и 4: " << goodSubjects << endl;

    // в) Количество двоек по каждому предмету
    cout << "\nв) Двоек по предметам:" << endl;
    for (int j = 0; j < SUBJECTS; j++) {
        int twos = 0;
        for (int i = 0; i < STUDENTS; i++) {
            if (grades[i][j] == 2) twos++;
        }
        cout << "Предмет " << (j + 1) << ": " << twos << endl;
    }

    return 0;
}