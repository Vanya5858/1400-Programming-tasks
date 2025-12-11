#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int grade;
    bool hasGrade2 = false;

    cout << "Введите оценки по информатике 28 учеников: ";

    for (int i = 0; i < 28 && !hasGrade2; i++) {
        cin >> grade;
        if (grade == 2)
            hasGrade2 = true;
    }

    // Досчитываем остальные оценки
    for (int i = (hasGrade2 ? 28 : 0); i < 28; i++) {
        cin >> grade;
    }

    cout << (hasGrade2 ? "Есть двойки" : "Нет двоек");
    return 0;
}