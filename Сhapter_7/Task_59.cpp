#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int grade, count5 = 0;
    int students;

    cout << "Введите количество учеников в классе: ";
    cin >> students;
    cout << "Введите оценки по информатике для каждого ученика: ";

    for (int i = 0; i < students; i++) {
        cin >> grade;
        if (grade == 5)
            count5++;
    }

    cout << "Количество пятёрок = " << count5;
    return 0;
}