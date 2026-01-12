#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int teams;
    int points[100];

    cout << "Введите количество команд в чемпионате: ";
    cin >> teams;

    if (teams < 2) {
        cout << "Для проверки нужно минимум 2 команды!\n";
        return 0;
    }

    cout << "Введите количество очков для каждой команды:\n";
    for (int i = 0; i < teams; i++) {
        cout << "Команда " << i + 1 << ": ";
        cin >> points[i];
    }

    // Проверяем упорядоченность по убыванию (1 место - больше очков)
    bool isCorrectOrder = true;
    int errorIndex = -1;

    for (int i = 0; i < teams - 1; i++) {
        if (points[i] < points[i + 1]) {
            isCorrectOrder = false;
            errorIndex = i + 1; // Индекс команды, нарушающей порядок
            break;
        }
    }

    if (isCorrectOrder) {
        cout << "\nКоманды перечислены в соответствии с занятыми местами.\n";
        cout << "Рейтинг команд (от 1-го места к последнему):\n";
        for (int i = 0; i < teams; i++) {
            cout << i + 1 << " место: " << points[i] << " очков\n";
        }
    }
    else {
        cout << "\nКоманды НЕ перечислены в соответствии с местами.\n";
        cout << "Ошибка на позиции " << errorIndex + 1 << endl;
        cout << "Команда " << errorIndex + 1 << ": " << points[errorIndex]
            << " очков (должно быть <= " << points[errorIndex - 1] << " очков)\n";

        // Показываем правильный порядок мест
        cout << "\nПравильный порядок мест должен быть:\n";
        cout << "1 место: " << points[0] << " очков\n";
        for (int i = 1; i < teams; i++) {
            if (points[i] > points[i - 1]) {
                cout << i << " место: " << points[i] << " очков (НЕПРАВИЛЬНО!)\n";
            }
            else {
                cout << i + 1 << " место: " << points[i] << " очков\n";
            }
        }
    }

    return 0;
}