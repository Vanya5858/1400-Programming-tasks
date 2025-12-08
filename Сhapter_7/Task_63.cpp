#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int grade, count5 = 0, count2 = 0;
    int students;

    cout << "Введите количество учеников в классе: ";
    cin >> students;
    cout << "Введите оценки по химии для каждого ученика: ";

    for (int i = 0; i < students; i++) {
        cin >> grade;
        if (grade == 5)
            count5++;
        else if (grade == 2)
            count2++;
    }

    cout << "Количество пятёрок: " << count5 << endl;
    cout << "Количество двоек: " << count2;
    return 0;
}