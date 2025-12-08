#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int STUDENTS = 20;
    int grade, count5 = 0;
    int choice;

    cout << "Выберите случай:\n";
    cout << "1. Известно, что пятёрки имеют не все ученики\n";
    cout << "2. Допускается, что пятёрки могут иметь все ученики\n";
    cout << "Ваш выбор (1 или 2): ";
    cin >> choice;

    if (choice != 1 && choice != 2) {
        cout << "Ошибка выбора!";
        return 0;
    }

    cout << "Введите оценки по информатике 20 учеников: ";

    if (choice == 1) {
        // Случай 1: известно, что пятёрки имеют не все ученики
        for (int i = 0; i < STUDENTS; i++) {
            cin >> grade;
            if (grade == 5)
                count5++;
            else
                break;
        }
    }
    else {
        // Случай 2: допускается, что пятёрки могут иметь все ученики
        for (int i = 0; i < STUDENTS; i++) {
            cin >> grade;
            if (grade == 5)
                count5++;
        }
    }

    cout << "Количество учеников с оценкой '5': " << count5;

    return 0;
}