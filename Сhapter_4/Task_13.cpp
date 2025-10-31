#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double mass1, volume1, mass2, volume2;

    cout << "Введите данные для первого тела:\n";
    cout << "Масса: ";
    cin >> mass1;
    cout << "Объем: ";
    cin >> volume1;

    cout << "Введите данные для второго тела:\n";
    cout << "Масса: ";
    cin >> mass2;
    cout << "Объем: ";
    cin >> volume2;

    // Проверка на корректность данных
    if (mass1 <= 0 || mass2 <= 0 || volume1 <= 0 || volume2 <= 0) {
        cout << "Ошибка! Массы и объемы должны быть положительными.\n";
        return 1;
    }

    // Вычисляем плотности
    double density1 = mass1 / volume1;
    double density2 = mass2 / volume2;

    // Сравниваем плотности
    cout << "\nРезультаты:\n";
    cout << "Плотность первого материала: " << density1 << " кг/м³\n";
    cout << "Плотность второго материала: " << density2 << " кг/м³\n\n";

    if (density1 > density2) {
        cout << "Плотность ПЕРВОГО материала БОЛЬШЕ\n";
    }
    else if (density2 > density1) {
        cout << "Плотность ВТОРОГО материала БОЛЬШЕ\n";
    }
    else {
        cout << "Плотности материалов РАВНЫ\n";
    }

    return 0;
}