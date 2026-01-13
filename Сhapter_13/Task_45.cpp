#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int STUDENTS = 23;
const int SUBJECTS = 12;

void printTable(string subjects[], int marks[][SUBJECTS + 1]) {
    cout << left << setw(15) << "Предметы";
    for (int i = 0; i < STUDENTS; i++) {
        cout << setw(4) << "Уч" + to_string(i + 1);
    }
    cout << endl;
    cout << string(15 + STUDENTS * 4, '-') << endl;

    for (int i = 0; i < SUBJECTS; i++) {
        cout << left << setw(15) << subjects[i];
        for (int j = 0; j < STUDENTS; j++) {
            cout << setw(4) << marks[j][i];
        }
        cout << endl;
    }
}

void insertNewSubject(string subjects[], int marks[][SUBJECTS + 1],
    string newSubject, int position) {
    // Сдвигаем предметы вправо
    for (int i = SUBJECTS; i >= position; i--) {
        subjects[i] = subjects[i - 1];
    }

    // Вставляем новый предмет
    subjects[position - 1] = newSubject;

    // Сдвигаем оценки вправо для каждого ученика
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = SUBJECTS; j >= position; j--) {
            marks[i][j] = marks[i][j - 1];
        }
        // Заполняем новые оценки (случайные от 3 до 5)
        marks[i][position - 1] = 3 + rand() % 3;
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    string subjects[SUBJECTS + 1]; // +1 для нового предмета
    int marks[STUDENTS][SUBJECTS + 1] = { 0 };

    // Исходные предметы
    string originalSubjects[SUBJECTS] = {
        "Математика", "Физика", "Химия", "Биология",
        "История", "Литература", "Русский язык", "Иностранный язык",
        "География", "Информатика", "Физкультура", "Обществознание"
    };

    // Копируем в массив с запасом
    for (int i = 0; i < SUBJECTS; i++) {
        subjects[i] = originalSubjects[i];
    }

    // Заполняем случайными оценками
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < SUBJECTS; j++) {
            marks[i][j] = 3 + rand() % 3; // оценки от 3 до 5
        }
    }

    cout << "Исходная таблица (12 предметов):" << endl;
    cout << "=================================" << endl;
    printTable(subjects, marks);

    // Новый предмет
    string newSubject = "Экология";
    int position = 5; // новый предмет будет на 5-м месте

    // Вставляем новый предмет
    insertNewSubject(subjects, marks, newSubject, position);

    cout << "\n\nТаблица после добавления предмета \""
        << newSubject << "\" на " << position << "-е место:" << endl;
    cout << "===================================================" << endl;
    printTable(subjects, marks);

    return 0;
}