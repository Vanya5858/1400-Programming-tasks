#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int GROUPS = 3;
    const int STUDENTS = 20;
    const int EXAMS = 3;

    // Ввод данных
    cout << "Введите оценки студентов (от 2 до 5):" << endl;

    double groupAverages[GROUPS] = { 0 };

    for (int g = 0; g < GROUPS; g++) {
        cout << "\nГруппа " << (g + 1) << ":" << endl;
        double groupSum = 0;

        for (int s = 0; s < STUDENTS; s++) {
            cout << "Студент " << (s + 1) << " (3 оценки): ";
            int studentSum = 0;

            for (int e = 0; e < EXAMS; e++) {
                int grade;
                cin >> grade;
                studentSum += grade;
            }

            groupSum += studentSum / (double)EXAMS;
        }

        groupAverages[g] = groupSum / STUDENTS;
        cout << "Средний балл группы: " << fixed << setprecision(2)
            << groupAverages[g] << endl;
    }

    // Определение лучшей группы
    int bestGroup = 0;
    double bestAverage = groupAverages[0];
    for (int g = 1; g < GROUPS; g++) {
        if (groupAverages[g] > bestAverage) {
            bestAverage = groupAverages[g];
            bestGroup = g;
        }
    }

    cout << "\nЛучшая по среднему баллу: группа " << (bestGroup + 1)
        << " (" << fixed << setprecision(2) << bestAverage << ")" << endl;

    return 0;
}