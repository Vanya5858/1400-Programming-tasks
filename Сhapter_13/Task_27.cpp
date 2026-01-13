#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student {
    string surname;
    int marks[12]; // оценки по 12 предметам
};

double studentAverage(Student student) {
    double sum = 0;
    for (int i = 0; i < 12; i++) {
        sum += student.marks[i];
    }
    return sum / 12.0;
}

double classAverage(Student students[], int n) {
    double totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += studentAverage(students[i]);
    }
    return totalSum / n;
}

void printAboveAverageStudents(Student students[], int n) {
    double classAvg = classAverage(students, n);

    cout << "\nУченики со средней оценкой выше средней по классу ("
        << fixed << setprecision(2) << classAvg << "):" << endl;
    cout << "======================================================" << endl;

    for (int i = 0; i < n; i++) {
        double studentAvg = studentAverage(students[i]);
        if (studentAvg > classAvg) {
            cout << students[i].surname << ": "
                << fixed << setprecision(2) << studentAvg << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    Student students[20] = {
        {"Иванов", {5, 4, 5, 4, 5, 4, 5, 4, 5, 4, 5, 4}},
        {"Петров", {4, 4, 4, 4, 3, 4, 4, 4, 4, 4, 4, 4}},
        {"Сидоров", {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5}},
        {"Кузнецов", {3, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3}},
        {"Смирнов", {4, 5, 4, 5, 4, 5, 4, 5, 4, 5, 4, 5}},
        {"Васильев", {5, 4, 5, 4, 5, 4, 5, 4, 5, 4, 5, 4}},
        {"Попов", {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}},
        {"Новиков", {5, 5, 4, 5, 4, 5, 4, 5, 4, 5, 4, 5}},
        {"Федоров", {3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4}},
        {"Морозов", {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}},
        {"Волков", {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5}},
        {"Алексеев", {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}},
        {"Лебедев", {5, 4, 5, 4, 5, 4, 5, 4, 5, 4, 5, 4}},
        {"Семенов", {4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3}},
        {"Егоров", {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5}},
        {"Павлов", {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}},
        {"Козлов", {5, 4, 5, 4, 5, 4, 5, 4, 5, 4, 5, 4}},
        {"Степанов", {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}},
        {"Николаев", {4, 5, 4, 5, 4, 5, 4, 5, 4, 5, 4, 5}},
        {"Орлов", {5, 5, 4, 5, 4, 5, 4, 5, 4, 5, 4, 5}}
    };

    // Вывод средней оценки каждого ученика
    cout << "Средние оценки учеников:" << endl;
    cout << "========================" << endl;
    for (int i = 0; i < 20; i++) {
        cout << students[i].surname << ": "
            << fixed << setprecision(2) << studentAverage(students[i]) << endl;
    }

    // Средняя оценка по классу
    double classAvg = classAverage(students, 20);
    cout << "\nСредняя оценка по классу: "
        << fixed << setprecision(2) << classAvg << endl;

    // Ученики с оценкой выше средней
    printAboveAverageStudents(students, 20);

    return 0;
}