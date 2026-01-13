#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int SUBJECTS = 10;

struct Student {
    string surname;
    int marks[SUBJECTS];
};

void printTable(Student students[], int n) {
    cout << left << setw(15) << "Фамилия";
    for (int j = 0; j < SUBJECTS; j++) {
        cout << setw(4) << j + 1;
    }
    cout << endl;
    cout << string(15 + SUBJECTS * 4, '-') << endl;

    for (int i = 0; i < n; i++) {
        cout << left << setw(15) << students[i].surname;
        for (int j = 0; j < SUBJECTS; j++) {
            cout << setw(4) << students[i].marks[j];
        }
        cout << endl;
    }
}

void insertNewStudent(Student students[], int& n, Student newStudent, int position) {
    // Сдвигаем элементы вправо начиная с позиции position-1
    for (int i = n; i >= position; i--) {
        students[i] = students[i - 1];
    }

    // Вставляем нового ученика
    students[position - 1] = newStudent;
    n++;
}

int main() {
    setlocale(LC_ALL, "RU");

    Student students[26]; // было 25, станет 26
    int currentCount = 25;

    // Заполняем исходную таблицу (25 учеников)
    for (int i = 0; i < currentCount; i++) {
        students[i].surname = "Ученик" + to_string(i + 1);
        for (int j = 0; j < SUBJECTS; j++) {
            students[i].marks[j] = 3 + rand() % 3; // оценки от 3 до 5
        }
    }

    cout << "Исходная таблица (25 учеников):" << endl;
    cout << "================================" << endl;
    printTable(students, currentCount);

    // Новый ученик
    Student newStudent;
    newStudent.surname = "Новиков";
    for (int j = 0; j < SUBJECTS; j++) {
        newStudent.marks[j] = 4 + rand() % 2; // оценки 4 или 5
    }

    int position = 10; // новенький будет на 10-м месте

    // Вставляем нового ученика
    insertNewStudent(students, currentCount, newStudent, position);

    cout << "\n\nТаблица после добавления нового ученика на "
        << position << "-е место:" << endl;
    cout << "==============================================" << endl;
    printTable(students, currentCount);

    return 0;
}