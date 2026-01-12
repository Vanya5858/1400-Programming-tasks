#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 40;
    int students[n];

    cout << "Введите численность " << n << " классов:\n";
    for (int i = 0; i < n; i++) cin >> students[i];

    int maxStudents = students[0], minStudents = students[0];

    for (int i = 1; i < n; i++) {
        if (students[i] > maxStudents) maxStudents = students[i];
        if (students[i] < minStudents) minStudents = students[i];
    }

    if (maxStudents - minStudents >= 10)
        cout << "В самом многочисленном классе учится на 10 или более учеников больше.\n";
    else
        cout << "Разница между самым многочисленным и малочисленным классом меньше 10.\n";

    return 0;
}