#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int COURSES = 5;
    const int GROUPS = 6;
    int students[COURSES][GROUPS];

    // Ввод данных
    cout << "Введите количество студентов:" << endl;
    for (int i = 0; i < COURSES; i++) {
        cout << "Курс " << (i + 1) << " (6 групп): ";
        for (int j = 0; j < GROUPS; j++) {
            cin >> students[i][j];
        }
    }

    // а) На каком курсе обучается меньше всего студентов
    int minCourse = 0;
    int minCourseTotal = 1000;
    for (int i = 0; i < COURSES; i++) {
        int courseTotal = 0;
        for (int j = 0; j < GROUPS; j++) {
            courseTotal += students[i][j];
        }
        if (courseTotal < minCourseTotal) {
            minCourseTotal = courseTotal;
            minCourse = i;
        }
    }
    cout << "\nа) Меньше всего студентов на курсе: " << (minCourse + 1)
        << " (" << minCourseTotal << " студентов)" << endl;

    // б) Какая из групп (указать ее номер и номер курса) самая малочисленная
    int minGroupCourse = 0, minGroupNum = 0;
    int minGroupSize = students[0][0];
    for (int i = 0; i < COURSES; i++) {
        for (int j = 0; j < GROUPS; j++) {
            if (students[i][j] < minGroupSize) {
                minGroupSize = students[i][j];
                minGroupCourse = i;
                minGroupNum = j;
            }
        }
    }
    cout << "б) Самая малочисленная группа: курс " << (minGroupCourse + 1)
        << ", группа " << (minGroupNum + 1)
        << " (" << minGroupSize << " студентов)" << endl;

    // в) Номер самой малочисленной группы (для каждого курса)
    cout << "\nв) Самая малочисленная группа на каждом курсе:" << endl;
    for (int i = 0; i < COURSES; i++) {
        int minOnCourse = students[i][0];
        int minGroupIndex = 0;
        for (int j = 1; j < GROUPS; j++) {
            if (students[i][j] < minOnCourse) {
                minOnCourse = students[i][j];
                minGroupIndex = j;
            }
        }
        cout << "Курс " << (i + 1) << ": группа " << (minGroupIndex + 1)
            << " (" << minOnCourse << " студентов)" << endl;
    }

    return 0;
}