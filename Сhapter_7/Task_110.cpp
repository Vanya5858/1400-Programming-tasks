#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double mass;
    double sumHeavy = 0, sumLight = 0;
    int countHeavy = 0, countLight = 0;
    int people;

    cout << "Введите количество людей в группе: ";
    cin >> people;
    cout << "Введите массу каждого человека (кг): ";

    for (int i = 0; i < people; i++) {
        cin >> mass;
        if (mass > 100) {
            sumHeavy += mass;
            countHeavy++;
        }
        else {
            sumLight += mass;
            countLight++;
        }
    }

    cout << "Полные люди (>100 кг):\n";
    if (countHeavy > 0) {
        cout << "  Количество: " << countHeavy << endl;
        cout << "  Средняя масса: " << sumHeavy / countHeavy << " кг\n";
    }
    else {
        cout << "  Нет полных людей (хотя должны быть)\n";
    }

    cout << "\nОстальные люди:\n";
    if (countLight > 0) {
        cout << "  Количество: " << countLight << endl;
        cout << "  Средняя масса: " << sumLight / countLight << " кг";
    }
    else {
        cout << "  Нет остальных людей";
    }

    return 0;
}