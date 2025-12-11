#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int grade;
    bool hasGrade3 = false;

    cout << "Введите оценки ученика по 12 предметам: ";

    for (int i = 0; i < 12; i++) {
        cin >> grade;
        if (grade == 3) {
            hasGrade3 = true;
        }
    }

    cout << (hasGrade3 ? "Среди оценок есть тройки" :
        "Среди оценок нет троек") << endl;

    cout << "Можно ли использовать while? Да, но for удобнее.";

    return 0;
}