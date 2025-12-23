#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int N = 20;
    int maxStudents = 0, minStudents = 1000;

    cout << "Введите количество учеников в 20 классах: ";
    for (int i = 0; i < N; i++) {
        int students;
        cin >> students;

        if (students > maxStudents) maxStudents = students;
        if (students < minStudents) minStudents = students;
    }

    int difference = maxStudents - minStudents;
    cout << "Разница между самым большим и самым маленьким классом: "
        << difference << " учеников\n";

    return 0;
}