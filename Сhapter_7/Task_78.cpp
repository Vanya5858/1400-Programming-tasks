#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int grade;
    int count5 = 0, count4 = 0, count3 = 0, count2 = 0;
    int students;

    cout << "Введите количество учеников в классе: ";
    cin >> students;
    cout << "Введите оценки по физике для каждого ученика: ";

    for (int i = 0; i < students; i++) {
        cin >> grade;
        switch (grade) {
        case 5: count5++; break;
        case 4: count4++; break;
        case 3: count3++; break;
        case 2: count2++; break;
        }
    }

    cout << "\nРезультаты:\n";
    cout << "Пятёрок: " << count5 << endl;
    cout << "Четвёрок: " << count4 << endl;
    cout << "Троек: " << count3 << endl;
    cout << "Двоек: " << count2;

    return 0;
}